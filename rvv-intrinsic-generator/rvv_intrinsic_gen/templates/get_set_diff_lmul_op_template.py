"""
--------------------------------------------------------------------------------
Copyright 2022 SiFive Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
--------------------------------------------------------------------------------

Template for rendering Vector Insertion and Extraction intrinsics. They are
intrinsics defined and do not have a corresponding instruction in RVV.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from utils import basic_constraint
from enums import InstInfo
from enums import InstType


def not_fractional_lmul(lmul):
  return str(lmul)[0] != "f"


def common_constraint(**kargs):
  return not_fractional_lmul(kargs["LMUL"]) \
         and not_fractional_lmul(kargs["SRC_LMUL"])


def vget_constraint(**kargs):
  return basic_constraint(**kargs) \
         and common_constraint(**kargs) \
         and int(kargs["LMUL"]) < int(kargs["SRC_LMUL"])


def vset_constraint(**kargs):
  return basic_constraint(**kargs) \
         and common_constraint(**kargs) \
         and int(kargs["LMUL"]) > int(kargs["SRC_LMUL"])


def render(G, op_list, type_list, sew_list, lmul_list, decorator_list):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)

    assert len(op_list)
    vget = True
    if op_list[0] == "vget":
      constraint = vget_constraint
    elif op_list[0] == "vset":
      constraint = vset_constraint
      vget = False
    else:
      raise Exception("Unknown operation")

    for args in prod(
        OP=op_list,
        SEW=sew_list,
        TYPE=type_list,
        LMUL=lmul_list,
        SRC_LMUL=lmul_list,
        constraint=constraint):

      type_helper = TypeHelper(**args)
      src_type = "v{TYPE}{SEW}m{SRC_LMUL}_t".format_map(args)

      func_name = "{OP}_v_{TYPE}{SEW}m{SRC_LMUL}_{TYPE}{SEW}m{LMUL}".format_map(
          args)
      if vget:
        G.func(
            InstInfo.get(args, decorator, InstType.VGET),
            name=func_name,
            return_type=type_helper.v,
            src=src_type,
            index=type_helper.size_t)
      else:
        G.func(
            InstInfo.get(args, decorator, InstType.VSET),
            name=func_name,
            return_type=type_helper.v,
            dest=type_helper.v,
            index=type_helper.size_t,
            val=src_type)

  G.inst_group_epilogue()
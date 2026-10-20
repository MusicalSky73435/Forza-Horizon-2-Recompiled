// Auto-generated master template index -- DO NOT EDIT
#pragma once

#include <string_view>
#include <unordered_map>
#include <string>

#include "codegen__indirect_call.inja.h"
#include "codegen_dll_targets_cmake.inja.h"
#include "codegen_funcs_h.inja.h"
#include "codegen_init_cpp.inja.h"
#include "codegen_init_h.inja.h"
#include "codegen_module_registry_cpp.inja.h"
#include "codegen_pch_h.inja.h"
#include "codegen_register_cpp.inja.h"
#include "codegen_sources_cmake.inja.h"
#include "init_app_header.inja.h"
#include "init_cmake_presets.inja.h"
#include "init_cmakelists.inja.h"
#include "init_main_cpp.inja.h"
#include "init_manifest_toml.inja.h"
#include "init_rexglue_cmake.inja.h"
#include "test_ppc_config_h.inja.h"
#include "test_ppc_test_cases_cpp.inja.h"
#include "test_ppc_test_decls_h.inja.h"
#include "test_ppc_test_functions_cpp.inja.h"

namespace rex::codegen {

inline const std::unordered_map<std::string, std::string_view>& embeddedTemplates() {
  static const std::unordered_map<std::string, std::string_view> map = {
    {"codegen/_indirect_call", embedded::codegen__indirect_call},
    {"codegen/dll_targets_cmake", embedded::codegen_dll_targets_cmake},
    {"codegen/funcs_h", embedded::codegen_funcs_h},
    {"codegen/init_cpp", embedded::codegen_init_cpp},
    {"codegen/init_h", embedded::codegen_init_h},
    {"codegen/module_registry_cpp", embedded::codegen_module_registry_cpp},
    {"codegen/pch_h", embedded::codegen_pch_h},
    {"codegen/register_cpp", embedded::codegen_register_cpp},
    {"codegen/sources_cmake", embedded::codegen_sources_cmake},
    {"init/app_header", embedded::init_app_header},
    {"init/cmake_presets", embedded::init_cmake_presets},
    {"init/cmakelists", embedded::init_cmakelists},
    {"init/main_cpp", embedded::init_main_cpp},
    {"init/manifest_toml", embedded::init_manifest_toml},
    {"init/rexglue_cmake", embedded::init_rexglue_cmake},
    {"test/ppc_config_h", embedded::test_ppc_config_h},
    {"test/ppc_test_cases_cpp", embedded::test_ppc_test_cases_cpp},
    {"test/ppc_test_decls_h", embedded::test_ppc_test_decls_h},
    {"test/ppc_test_functions_cpp", embedded::test_ppc_test_functions_cpp},
  };
  return map;
}

}  // namespace rex::codegen

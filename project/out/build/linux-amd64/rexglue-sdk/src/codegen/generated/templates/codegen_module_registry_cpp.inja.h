// Auto-generated from resources/templates/codegen/module_registry_cpp.inja -- DO NOT EDIT
#pragma once
#include <string_view>

namespace rex::codegen::embedded {
inline constexpr std::string_view codegen_module_registry_cpp = R"__TMPL__(//=============================================================================
// ReXGlue Generated - {{ project }} Module Registry
//=============================================================================

#include <rex/system/kernel_state.h>

void RegisterRecompiledModules(rex::system::KernelState* kernel_state) {
{% for mod in dll_modules %}
  kernel_state->RegisterRecompiledModule(
      "{{ mod.pe_name }}",
      "{{ mod.guest_path }}",
      "{{ mod.shared_lib_name }}");
{% endfor %}
}
)__TMPL__";
}  // namespace rex::codegen::embedded

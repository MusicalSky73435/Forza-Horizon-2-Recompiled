// Auto-generated from resources/templates/init/main_cpp.inja -- DO NOT EDIT
#pragma once
#include <string_view>

namespace rex::codegen::embedded {
inline constexpr std::string_view init_main_cpp = R"__TMPL__(// {{ names.original }} - ReXGlue Recompiled Project

#include "{{ entrypoint_out_dir }}/{{ names.original }}_init.h"

#include "{{ names.original }}_app.h"

REX_DEFINE_APP({{ names.original }}, {{ names.pascal_case }}App::Create)
)__TMPL__";
}  // namespace rex::codegen::embedded

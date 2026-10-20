// Auto-generated from resources/templates/init/cmakelists.inja -- DO NOT EDIT
#pragma once
#include <string_view>

namespace rex::codegen::embedded {
inline constexpr std::string_view init_cmakelists = R"__TMPL__(# {{ names.original }} - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project({{ names.original }} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set({{ names.upper_case }}_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable({{ names.original }} WIN32 {{ cmake_var(names.upper_case + "_SOURCES") }})
else()
    add_executable({{ names.original }} {{ cmake_var(names.upper_case + "_SOURCES") }})
endif()

rexglue_setup_target({{ names.original }})
)__TMPL__";
}  // namespace rex::codegen::embedded

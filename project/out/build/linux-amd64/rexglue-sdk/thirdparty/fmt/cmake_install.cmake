# Install script for directory: /home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/flyinggoose/Projets/Lab/rexglue-sdk/out/linux-amd64/Debug/libfmtd.a")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/flyinggoose/Projets/Lab/rexglue-sdk/out/linux-amd64/Release/libfmt.a")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/flyinggoose/Projets/Lab/rexglue-sdk/out/linux-amd64/RelWithDebInfo/libfmtrd.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/fmt" TYPE FILE FILES
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/args.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/base.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/chrono.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/color.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/compile.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/core.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/format.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/format-inl.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/os.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/ostream.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/printf.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/ranges.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/std.h"
    "/home/flyinggoose/Projets/Lab/rexglue-sdk/thirdparty/fmt/include/fmt/xchar.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES
    "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/fmt-config.cmake"
    "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/fmt-config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake"
         "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/fmt.pc")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/flyinggoose/Projets/Lab/xbox360-ports/games/FH2/project/out/build/linux-amd64/rexglue-sdk/thirdparty/fmt/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()

cmake_minimum_required(VERSION 3.25)
include(FetchContent)

set(FETCHCONTENT_FULLY_DISCONNECTED ON)
set(FETCHCONTENT_BASE_DIR ${CMAKE_SOURCE_DIR}/dependencies)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

project(tp_3 LANGUAGES CXX)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wshadow -fsanitize=address,undefined")
endif()

#----------------------------------------
# Mandatory: Add any new source files here
set(sources
  src/exception.cpp
)

# Optional: Add any new header files here
set(headers
  src/chaine.hpp
  src/cosinus.hpp
  src/demangle.hpp
  src/exception.hpp
  src/exponentielle.hpp
  src/factorielle.hpp
  src/puissance.hpp
)
#----------------------------------------

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)
FetchContent_MakeAvailable(Catch2)

add_library(tp_3 INTERFACE)
target_sources(tp_3 INTERFACE ${sources} ${headers})
target_include_directories(tp_3 INTERFACE src)

add_executable(tp3_test)
target_link_libraries(tp3_test PRIVATE Catch2::Catch2WithMain tp_3)
target_sources(tp3_test PRIVATE test/tp3_test.cpp)

add_executable(sandbox)
target_link_libraries(sandbox PRIVATE tp_3)
target_sources(sandbox PRIVATE sandbox/main.cpp)
target_include_directories(sandbox PRIVATE sandbox/src)

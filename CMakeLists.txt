cmake_minimum_required(VERSION 3.24)

# set the project name and version
project(SassoInputValidationLibCpp VERSION 0.9.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# add the executable
add_library(SassoInputValidationLibCpp STATIC src/InputValidationLibCpp.hpp src/InputValidationLibCpp.cpp)

add_executable(InputValidationLibCpp_test tests/InputValidationLibCpp_test.cpp)
target_link_libraries( InputValidationLibCpp_test SassoInputValidationLibCpp GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(InputValidationLibCpp_test)
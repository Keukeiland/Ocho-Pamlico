# Set CMake build options
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build)
cmake_minimum_required(VERSION 3.27...3.27.7)

# Configure build environment
set(ENV{PICO_SDK_PATH} ${CMAKE_SOURCE_DIR}/lib/pico-sdk)
set(ENV{PICOVGA_PATH} ${CMAKE_SOURCE_DIR}/lib/picovga-cmake)
set(PICO_DEOPTIMIZED_DEBUG 1)

# Include external libraries
include(pico_sdk_import.cmake)
include(picovga_import.cmake)

# Set manifest values
project(ocho-pamlico C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Load Pico SDK
pico_sdk_init()

# Enable all compiler options except
add_compile_options(
    -Wall
    -Wno-unused-function # we have some for the docs that aren't called
    -Wno-unused-variable
    -Wno-format
    -Wno-sign-compare
)

# Enable VGA V-sync pin for compatibility
add_compile_definitions(VGA_GPIO_VSYNC=9)

# Add the source code
add_subdirectory(src)

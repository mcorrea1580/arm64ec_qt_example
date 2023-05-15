cmake_minimum_required(VERSION 3.24)
project(POC_ARM64EC_QT C CXX)

list(APPEND CMAKE_PREFIX_PATH ${QT_PATH})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)

set(bin_output "${CMAKE_CURRENT_LIST_DIR}/build/${PRESET_NAME}/bin")
set(lib_output "${CMAKE_CURRENT_LIST_DIR}/build/${PRESET_NAME}/lib")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${bin_output})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${lib_output})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${lib_output})

set(ROOT "${CMAKE_CURRENT_LIST_DIR}")

add_subdirectory(api)
add_subdirectory(cxx_app)

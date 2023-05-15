set(project_name api)

find_package(Qt6 REQUIRED COMPONENTS Core)

set(headers
    include/lib.h
)

set(sources
    src/lib.cpp
)

add_library(${project_name} SHARED ${headers} ${sources})

target_include_directories(${project_name} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(${project_name} PUBLIC
    Qt6::Core
)

target_compile_definitions(${project_name} PRIVATE
    API_SHARED_LIBRARY
)

add_custom_command(
    TARGET ${project_name} POST_BUILD
    COMMAND ${QT_PATH}/bin/windeployqt.exe
       $<IF:$<CONFIG:Release>,--release,--debug>
       $<TARGET_FILE:${project_name}>
)

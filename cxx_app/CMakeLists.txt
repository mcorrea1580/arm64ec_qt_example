set(project_name cxx_app)

add_executable(${project_name} main.cpp)

target_include_directories(${project_name} PRIVATE
    ${ROOT}
)

target_link_libraries(${project_name} PRIVATE
    api
)

add_custom_command(
    TARGET ${project_name} POST_BUILD
    COMMAND ${QT_PATH}/bin/windeployqt.exe
       $<IF:$<CONFIG:Release>,--release,--debug>
       $<TARGET_FILE:${project_name}>
)

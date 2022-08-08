cmake_minimum_required(VERSION 3.12)
project(CGs_demo)

add_subdirectory(lib)

file(GLOB SOURCE_FILES main.cpp)
add_executable(CGs_demo ${SOURCE_FILES})
target_include_directories(CGs_demo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib/include)
target_link_libraries(CGs_demo PUBLIC cgs_demo)

install(TARGETS CGs_demo DESTINATION bin/)
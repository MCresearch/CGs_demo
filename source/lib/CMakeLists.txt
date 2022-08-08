# libmd
set (libname cgs_demo)

file(GLOB LIB_SRC src/*.cpp)
file(GLOB INC_SRC include/*.h)

add_definitions(-D__NORMAL)
add_library(${libname} SHARED ${LIB_SRC})
target_include_directories(${libname} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

install(TARGETS cgs_demo DESTINATION lib/)

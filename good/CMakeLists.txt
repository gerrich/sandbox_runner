SET(CMAKE_EXE_LINKER_FLAGS "--static -lm")

add_executable(hello_world hello_world.c)
add_executable(sort sort.cpp)
add_executable(echo echo.c)

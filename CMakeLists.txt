cmake_minimum_required(VERSION 2.6)

set(NAME sample2)
add_executable(${NAME}
  sample2.c
)
target_link_libraries(${NAME}
  sandbox
)

add_subdirectory(bad)
add_subdirectory(good)

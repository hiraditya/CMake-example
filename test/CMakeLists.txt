cmake_minimum_required(VERSION 2.8)

include_directories(/home/hiraditya/work/build-examples/include)

set(sorting
  main.cpp
)

# The executables to be generated
add_executable(sorting ${sorting})

# The libraries to link against
target_link_libraries(sorting BubbleSort)

#VERSION of the cmake required
cmake_minimum_required(VERSION 2.8)

# Name of the project
project(SampleProject)

# All the "non-standard" include paths compiler should look into
include_directories(include)


# Flags to be passed to the C++ compiler
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++0x -pedantic -Wall")

# Add DNDEBUG to stop printing the messages.
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++0x -pedantic -Wall -DNDEBUG")


# Flags to be passed to the C compiler
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -pedantic -Wall")

# Subdirectories to be included for recursive build.
add_subdirectory(lib)
add_subdirectory(test)



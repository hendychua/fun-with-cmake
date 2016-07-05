cmake_minimum_required(VERSION 2.8.9)

# Remove 'lib' prefix for shared libraries on Windows
if (WIN32)
  set(CMAKE_SHARED_LIBRARY_PREFIX "")
endif ()

# When done tweaking common stuff, configure the components (subprojects).
# Note that the order matters! Those without dependencies should go first.
# lib_c and lib_b does not depend on other libs. lib_a depends on lib_b and
# the_executable depends on lib_a, lib_b, lib_c
add_subdirectory(lib_c)
add_subdirectory(lib_b)
add_subdirectory(lib_a)
add_subdirectory(the_executable)

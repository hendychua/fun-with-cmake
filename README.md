# fun-with-cmake
Just learning and having fun with CMake.

## Introduction
This is a simple C++ project for me to practise using CMake. It is for me to learn how to use CMake to build a project with interdependencies. The C++ project has 3 shared libs and 1 executable. The structure is as follows:
<pre>
proj_root
|-- CMakeLists.txt
|-- lib_a
    | -- CMakeLists.txt
    | -- ClassA.h
    | -- ClassA.cpp
|-- lib_b
    | -- CMakeLists.txt
    | -- ClassB.h
    | -- ClassB.cpp
|-- lib_c
    | -- CMakeLists.txt
    | -- ClassC.h
    | -- ClassC.cpp
|-- the_executable
    | -- CMakeLists.txt
    | -- main.cpp
</pre>

libclassB and libclassC do not have other dependencies.

libclassA depends on libclassB.

the_exe depends on all shared libs A, B and C.

# Running the program
1. Make sure you have cmake installed.
2. <code>cd</code> into the proj_root directory.
3. It is best to use out-of-source build. Hence, make a directory for containing the build files e.g. <code>mkdir build</code>
4. cd into the directory you created in step 3 e.g. <code>cd build</code>
5. <code>cmake ..</code>
6. <code>make</code>
7. <code>ls -l</code> (You should see files created by cmake, Makefile and folders lib_a, lib_b, lib_c, the_executable)
8. Inside each folder are the shared libs/exe built
9. <code>cd the_executable</code>
10. <code>./the_exe</code> (You should see the output from the program.)

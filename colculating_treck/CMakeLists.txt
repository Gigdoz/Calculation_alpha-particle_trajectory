project("Colculating_treck_Alfa_particle")

cmake_minimum_required (VERSION 3.8)


add_Library(Library  "Library/Header.h" "Library/Class.cpp")
target_include_directories(Library PUBLIC Library)

add_executable (tests tests/tests.cpp "Library/Class.cpp"  )

target_link_libraries(tests Library)


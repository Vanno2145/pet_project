cmake_minimum_required(VERSION 3.10)
project(PetProject)

add_subdirectory(lib)

add_executable(pet_app src/main.cpp)
target_link_libraries(pet_app pets)

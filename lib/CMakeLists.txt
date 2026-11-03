add_library(pets
    src/Pet.cpp
    src/Dog.cpp
    src/Cat.cpp
)

target_include_directories(pets PUBLIC include)

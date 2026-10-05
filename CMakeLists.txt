cmake_minimum_required(VERSION 3.20)
project(poker-hand-evaluator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Options de compilation strictes (l'équivalent de -Wall -Wextra)
add_compile_options(-Wall -Wextra)

# Dossier où CMake trouve tes headers (.h)
include_directories(include)

# Récupération automatique de tous les .cpp dans src/
file(GLOB SOURCES "src/*.cpp")

# Création de l'exécutable
add_executable(poker_engine ${SOURCES})
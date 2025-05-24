
### `CMakeLists.txt`

cmake_minimum_required(VERSION 3.10)
project(BalatroClone VERSION 0.1 LANGUAGES CXX)

# ─── Use the latest C++ standard ─────────────────────────────────────────────
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ─── Include directories & sources ───────────────────────────────────────────
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# ─── Build the executable ────────────────────────────────────────────────────
add_executable(BalatroClone ${SOURCES})

# ─── (Optional) Link SDL2/SFML ───────────────────────────────────────────────
# find_package(SDL2 REQUIRED)
# target_link_libraries(BalatroClone PRIVATE ${SDL2_LIBRARIES})

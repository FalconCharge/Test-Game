# MyGame/CMakeLists.txt
cmake_minimum_required(VERSION 3.15)
project(MyGame)

# Add the engine subdirectory (this will build it)
add_subdirectory(external/WolfEngine)

# Add your game executable
add_executable(MyGame src/main.cpp)

# Link the WolfEngine library to your game
target_link_libraries(MyGame PRIVATE WolfEngine)


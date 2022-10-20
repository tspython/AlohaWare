cmake_minimum_required (VERSION 2.6)
project (AlohaWare)

add_subdirectory(Core)
add_subdirectory(Console)

set(game_source_files
  Game/main.cpp
)
add_executable(alohaware ${game_source_files})
target_link_libraries(alohaware console)


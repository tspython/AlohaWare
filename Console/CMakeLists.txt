set(console_source_files
  ConsoleSystem.cpp
  ConsoleSystem.h
)
add_library(console ${console_source_files})
target_link_libraries(console core)

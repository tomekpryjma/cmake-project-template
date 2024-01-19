cmake_minimum_required(VERSION 3.28.1)

project (c-hedgehog)

add_subdirectory(libs/SDL2 EXCLUDE_FROM_ALL)

add_executable(game main.c core/game-core.h core/game-core.c)

# For reference: https://wiki.libsdl.org/SDL2/README/cmake
# SDL2::SDL2main may or may not be available. It is e.g. required by Windows GUI applications
if(TARGET SDL2::SDL2main)
    # It has an implicit dependency on SDL2 functions, so it MUST be added before SDL2::SDL2 (or SDL2::SDL2-static)
    target_link_libraries(game PRIVATE SDL2::SDL2main)
endif()

# Link to the actual SDL2 library. SDL2::SDL2 is the shared SDL library, SDL2::SDL2-static is the static SDL libarary.
target_link_libraries(game PRIVATE SDL2::SDL2)
project(nine-native)

add_library(${PROJECT_NAME} STATIC
    include/nine_sdl.h
    src/nine_sdl.c
    src/dri3.c
    src/dri3.h
)

target_include_directories(${PROJECT_NAME} PRIVATE
    include
    include/D3D9
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    SDL2
    X11
    xcb
    xcb-present
    xcb-dri3
    xcb-xfixes
    X11-xcb
)

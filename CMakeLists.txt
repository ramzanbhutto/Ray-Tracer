cmake_minimum_required(VERSION 3.10)
project(RayTracer)

# List all source files
set(SOURCES
    main.cpp
)

# List all header files
set(HEADERS
    camera.h
    color.h
    hittable.h
    hittable_list.h
    ray.h
    rtweekend.h
    sphere.h
    vec3.h
)

# Create executable with all files
add_executable(raytracer ${SOURCES} ${HEADERS})

# Include current directory for headers
target_include_directories(raytracer PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

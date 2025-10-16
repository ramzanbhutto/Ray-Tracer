# Ray-Tracer

A high-performance ray tracing renderer written in C++.

## Overview

This project implements a ray tracer, a rendering algorithm that simulates the way light interacts with objects to generate realistic images. It leverages C++ for efficient computation and CMake for build automation.

## Features

- Written in modern C++
- Supports rendering of scenes with multiple geometric primitives
- Configurable camera, lighting, and material properties
- Modular and extensible design for adding new features
- Cross-platform build support using CMake

## Getting Started

### Prerequisites

- C++ compiler (supporting C++11 or newer)
- CMake (3.10+ recommended)
- feh (command line image viewer)

### Build Instructions

1. Clone the repository:
    ```bash
    git clone https://github.com/ramzanbhutto/Ray-Tracer.git
    cd Ray-Tracer
    ```
2. Create a build directory and run CMake:
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```
  
3. Run the ray tracer:
    ```bash
    ./rayTracer > image.ppm
    ```  

4. It will generate output in ppm format so install *feh* in you system then run it to preview the output image.
```bash
   sudo pacman -S feh  # for arch linux
```
```bash
   feh image.ppm
```


## Usage

Configure scenes, camera, and rendering options by editing the appropriate source files. Run the executable to generate output images.

## Contributing

Contributions are welcome! Please open issues or pull requests for improvements, bug fixes, or new features.

## License

This project is licensed under the MIT License.

## Author

- [ramzanbhutto](https://github.com/ramzanbhutto)

# Lumen
Learning project exploring graphics programming, engine architecture, and modern C++.

## Clone
```bash
git clone --recursive https://github.com/hollow-earth/Lumen.git
cd Lumen
```

## Build
```bash
cmake -S . -B build
cmake --build build
```

## Run
```bash
./build/Lumen
```

## Dependencies
- GLFW: git submodule
- GLAD: vendored in `external/include`
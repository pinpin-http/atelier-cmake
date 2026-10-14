# atelier-cmake

Soheib Bouazzaoui

Calculatrice C et pipeline GitHub Actions, à partir de [OpenRSI/Atelier_CMAKE](https://github.com/OpenRSI/Atelier_CMAKE).

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/src/calculator car 5
```


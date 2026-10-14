# atelier-cmake

Soheib Bouazzaoui

Calculatrice C et pipeline GitHub Actions, à partir de [OpenRSI/Atelier_CMAKE](https://github.com/OpenRSI/Atelier_CMAKE).

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/src/calculator car 5
```

Les jobs `Test_Add` et `Test_Car` publient leurs rapports dans les artefacts GitHub Actions (conservation : 14 jours).

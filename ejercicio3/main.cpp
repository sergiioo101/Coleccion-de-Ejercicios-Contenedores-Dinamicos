#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    // Utilizar la función sort para ordenar el vector
    std::sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    std::cout << "Vector ordenado:" << std::endl;
    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    // Utilizar la función max_element para encontrar el elemento más grande
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Numero máximo: " << maxNum << std::endl;

    return 0;
}

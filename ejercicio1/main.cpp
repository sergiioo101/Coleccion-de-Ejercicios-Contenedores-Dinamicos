#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    // Añadir elementos al vector usando push_back
    numeros.push_back(60);
    numeros.push_back(70);

    // Utilizar un iterador para recorrer y mostrar cada elemento del vector
    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}


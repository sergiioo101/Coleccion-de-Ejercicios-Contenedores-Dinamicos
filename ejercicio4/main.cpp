#include <iostream>
#include <valarray>

int main() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Suma de todos los elementos
    std::cout << "Suma: " << valores.sum() << std::endl;

    // Media de los elementos
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    // Suma de un valor a cada elemento
    valores += 5.0;

    std::cout << "Valores + 5.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    // Resta de un valor a cada elemento
    valores -= 2.0;

    std::cout << "Valores - 2.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    // Multiplicación por un valor
    valores *= 2.0;

    std::cout << "Valores * 2.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    // División por un valor
    valores /= 3.0;

    std::cout << "Valores / 3.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}

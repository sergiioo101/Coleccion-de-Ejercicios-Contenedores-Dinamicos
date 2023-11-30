#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    // Mostrar la pila antes de realizar operaciones
    std::cout << "Contenido de la pila antes de operaciones:" << std::endl;
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }

    // Realizar operaciones push en la pila
    pila.push(6.6);
    pila.push(7.7);

    // Mostrar la pila después de operaciones push
    std::cout << "Contenido de la pila despues de operaciones push:" << std::endl;
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }

    return 0;
}

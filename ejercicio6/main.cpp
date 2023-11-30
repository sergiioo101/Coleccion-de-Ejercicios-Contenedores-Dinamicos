#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    std::string s = "12345";

    try {
        // Utilizando boost::lexical_cast para convertir la cadena en un número entero
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;

    } catch(const boost::bad_lexical_cast &e) {
        // Manejo de excepciones específicas de boost::lexical_cast
        std::cerr << "Error en la conversión: " << e.what() << std::endl;

    } catch(const std::exception &e) {
        // Captura otras excepciones estándar
        std::cerr << "Error general: " << e.what() << std::endl;

    } catch(...) {
        // Captura cualquier otra excepción no prevista
        std::cerr << "Error desconocido." << std::endl;
    }

    return 0;
}

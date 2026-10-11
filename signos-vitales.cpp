#include <iostream>
#include <string>

// Función de temperatura (Aportada por la rama temperatura)
double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

// Función de frecuencia cardíaca (Aportada por la rama frecuencia-cardiaca)
std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    } else if (lpm >= 60 && lpm <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}

int main() {
    double fahrenheit;
    int lpm;

    std::cout << "=== MODULO DE SIGNOS VITALES ===\n\n";

    // 1. Pedir y probar la temperatura
    std::cout << "Ingresa la temperatura en grados Fahrenheit: ";
    std::cin >> fahrenheit;
    double celsius = fahrenheitACelsius(fahrenheit);
    std::cout << "Resultado: " << fahrenheit << " °F equivalen a " << celsius << " °C\n\n";

    // 2. Pedir y probar la frecuencia cardíaca
    std::cout << "Ingresa la frecuencia cardiaca en lpm: ";
    std::cin >> lpm;
    std::string clasificacion = clasificarFrecuencia(lpm);
    std::cout << "Resultado: " << lpm << " lpm se clasifica como: " << clasificacion << "\n";

    return 0;
}
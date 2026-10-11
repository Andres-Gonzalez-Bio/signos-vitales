#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    } else if (lpm >= 60 && lpm <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}
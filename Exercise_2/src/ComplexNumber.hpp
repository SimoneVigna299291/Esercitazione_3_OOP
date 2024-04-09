// in questo header definisco la struttura di numero complesso e le operazioni di somma, coniugato e uguaglianza.

#include <iostream>

// definizione della struttura per rappresentare i numeri complessi
struct ComplexNumber {
    double real; // parte reale
    double imag; // parte immaginaria
};

// funzione per stampare un numero complesso
void printComplexNumber(const ComplexNumber& num) {
    if (num.imag >= 0)
        std::cout << num.real << "+" << num.imag << "i";
    else
        std::cout << num.real << num.imag << "i"; // se la parte immaginaria e' negativa non viene stampato alcun segno perche' e' gia' "memorizzato"
}

// funzione per sommare due numreri complessi
ComplexNumber somma(const ComplexNumber& z1, const ComplexNumber& z2) {
    ComplexNumber result;
    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}

// funzione per verificare che due numeri complessi siano uguali, osservare che ritorna un booleano quindi o 0 o 1
bool uguale(const ComplexNumber& z1, const ComplexNumber& z2) {
    return z1.real == z2.real && z1.imag == z2.imag; // confronto delle parti reali e immaginarie
}

// funzione per il calcolo del coniugato, basta cambiare segno alla parte immaginaria
ComplexNumber coniugato(const ComplexNumber& z) {
    ComplexNumber result;
    result.real = z.real; // la parte reale rimane invariata
    result.imag = -z.imag; // la parte immaginaria cambia di segno
    return result;
}

#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

int main() {
    // Test della classe ComplexNumber
    ComplexNumber z1 = {1,2};
    ComplexNumber z2 = {1,-2};

    //Stampa numeri complessi
    cout <<"Numero complesso z1: ";
    printComplexNumber(z1);
    cout << endl;
    cout <<"Numero complesso z2: ";
    printComplexNumber(z2);
    cout << endl;

    // Somma dei numeri complessi
    ComplexNumber sum = somma(z1,z2);
    cout <<"Somma di z1 e z2: ";
    printComplexNumber(sum);
    cout << endl;

    // Verifica dell'uguaglianza
    cout << "z1 e z2 sono uguali? " << std::boolalpha << uguale(z1,z2)<<endl;

    // Calcolo del coniugato
    ComplexNumber coniug_z1 = coniugato(z1);
    cout <<"Coniugato di z1: ";
    printComplexNumber(coniug_z1);
    cout << endl;

    return 0;
}

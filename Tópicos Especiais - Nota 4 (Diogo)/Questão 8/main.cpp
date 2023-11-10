#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número inteiro e positivo: ";
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "Por favor, insira um número inteiro e positivo." << std::endl;
        return 1;
    }

    std::cout << "Tabuada de multiplicar de " << numero << ":\n";

    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}

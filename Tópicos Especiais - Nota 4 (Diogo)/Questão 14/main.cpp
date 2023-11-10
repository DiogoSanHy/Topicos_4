#include <iostream>

int main() {
    int numero;

    while (true) {
        std::cout << "Digite um número positivo (-1 para encerrar): ";
        std::cin >> numero;

        if (numero == -1) {
            break;
        }

        if (numero <= 0) {
            std::cout << "Erro: Digite um número positivo ou -1 para encerrar." << std::endl;
            continue;
        }

        if (numero % 2 == 0) {
            std::cout << numero << " é um número par." << std::endl;
        } else {
            std::cout << numero << " é um número ímpar." << std::endl;
        }
    }

    return 0;
}

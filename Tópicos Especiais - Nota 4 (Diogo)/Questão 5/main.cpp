#include <iostream>
#include <cmath>

int main() {
    const int quantidadeNumeros = 10;

    for (int i = 0; i < quantidadeNumeros; ++i) {
        std::cout << "Digite o " << i + 1 << "º número: ";
        double numero;
        std::cin >> numero;

        double metade = numero / 2.0;
        double raizCubica = std::cbrt(numero);

        std::cout << "Metade: " << metade << ", Raiz Cúbica: " << raizCubica << std::endl;
    }

    return 0;
}

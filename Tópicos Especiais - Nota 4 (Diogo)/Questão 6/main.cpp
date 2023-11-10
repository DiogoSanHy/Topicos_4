#include <iostream>
#include <cmath> 

int main() {
    int N;
    std::cout << "Digite a quantidade de numeros (N): ";
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        double numero;
        
        std::cout << "Digite o numero #" << (i + 1) << ": ";
        std::cin >> numero;

        double metade = numero / 2.0;
        std::cout << "Metade: " << metade << std::endl;

        double raizCubica = cbrt(numero);
        std::cout << "Raiz Cubica: " << raizCubica << std::endl;

        std::cout << std::endl;
    }

    return 0;
}

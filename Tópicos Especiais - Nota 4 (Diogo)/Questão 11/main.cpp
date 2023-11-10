#include <iostream>

int main() {
    int N, somatorio = 0;

    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Erro: N deve ser um valor positivo." << std::endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i) {
        int numero;
        std::cout << "Digite o número " << i << ": ";
        std::cin >> numero;
        somatorio += numero;
    }

    std::cout << "O somatório dos " << N << " números é: " << somatorio << std::endl;

    return 0;
}

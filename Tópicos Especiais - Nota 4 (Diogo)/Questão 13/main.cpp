#include <iostream>
#include <limits>

int main() {
    int N, numero, somatorio = 0, maior, menor;

    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Erro: N deve ser um valor positivo." << std::endl;
        return 1;
    }

    std::cout << "Digite os números separados por espaço:\n";
    std::cin >> numero;
    somatorio = maior = menor = numero;

    for (int i = 2; i <= N; ++i) {
        std::cin >> numero;

        somatorio += numero;

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    std::cout << "O somatório dos " << N << " números é: " << somatorio << std::endl;
    std::cout << "O maior número é: " << maior << std::endl;
    std::cout << "O menor número é: " << menor << std::endl;

    return 0;
}

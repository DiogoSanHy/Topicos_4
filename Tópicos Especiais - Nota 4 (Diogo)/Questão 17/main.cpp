#include <iostream>

int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int N;

    std::cout << "Digite um número inteiro e positivo N: ";
    std::cin >> N;

    if (N < 0) {
        std::cout << "Erro: Digite um número inteiro e positivo." << std::endl;
        return 1;
    }

    int fatorial = calcularFatorial(N);

    std::cout << "O fatorial de " << N << " é: " << fatorial << std::endl;

    return 0;
}

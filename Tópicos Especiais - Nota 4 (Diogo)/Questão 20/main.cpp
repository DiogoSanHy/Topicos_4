#include <iostream>

int main() {
    int numero, somaPares = 0, somaImpares = 0, contadorPares = 0, contadorImpares = 0;

    for (int i = 1; i <= 20; ++i) {
        std::cout << "Digite o número " << i << ": ";
        std::cin >> numero;

        if (numero % 2 == 0) {
            somaPares += numero;
            contadorPares++;
        } else {
            somaImpares += numero;
            contadorImpares++;
        }
    }

    double mediaPares = contadorPares > 0 ? static_cast<double>(somaPares) / contadorPares : 0;
    double mediaImpares = contadorImpares > 0 ? static_cast<double>(somaImpares) / contadorImpares : 0;

    std::cout << "Média aritmética dos números pares: " << mediaPares << std::endl;
    std::cout << "Média aritmética dos números ímpares: " << mediaImpares << std::endl;

    return 0;
}

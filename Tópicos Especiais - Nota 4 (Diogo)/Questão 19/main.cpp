#include <iostream>
#include <limits>

int main() {
    int idade, menorIdade = std::numeric_limits<int>::max(), maiorIdade = std::numeric_limits<int>::min(), somaIdades = 0;

    for (int i = 1; i <= 20; ++i) {
        std::cout << "Digite a idade da pessoa " << i << ": ";
        std::cin >> idade;

        if (idade < menorIdade) {
            menorIdade = idade;
        }

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        somaIdades += idade;
    }

    double media = static_cast<double>(somaIdades) / 20;

    std::cout << "Média aritmética das idades: " << media << std::endl;
    std::cout << "Menor idade: " << menorIdade << std::endl;
    std::cout << "Maior idade: " << maiorIdade << std::endl;

    return 0;
}

#include <iostream>
#include <limits>

int main() {
    int idade, menorIdade = std::numeric_limits<int>::max(), maiorIdade = std::numeric_limits<int>::min(), somaIdades = 0;
    int contador = 0;

    while (true) {
        std::cout << "Digite a idade (ou -1 para encerrar): ";
        std::cin >> idade;

        if (idade == -1) {
            break;
        }

        if (idade < menorIdade) {
            menorIdade = idade;
        }

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        somaIdades += idade;
        contador++;
    }

    if (contador > 0) {
        double media = static_cast<double>(somaIdades) / contador;

        std::cout << "Menor idade: " << menorIdade << std::endl;
        std::cout << "Maior idade: " << maiorIdade << std::endl;
        std::cout << "Média aritmética das idades: " << media << std::endl;
    } else {
        std::cout << "Nenhuma idade foi inserida." << std::endl;
    }

    return 0;
}

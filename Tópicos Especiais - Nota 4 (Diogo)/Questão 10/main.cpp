#include <iostream>

int main() {
    int limiteInferior, limiteSuperior;

    std::cout << "Digite o limite inferior do intervalo: ";
    std::cin >> limiteInferior;

    std::cout << "Digite o limite superior do intervalo: ";
    std::cin >> limiteSuperior;

    if (limiteSuperior < limiteInferior) {
        std::cout << "Erro: O limite superior deve ser maior ou igual ao limite inferior." << std::endl;
        return 1;
    }

    std::cout << "Números ímpares entre " << limiteInferior << " e " << limiteSuperior << ":\n";

    for (int i = limiteInferior; i <= limiteSuperior; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

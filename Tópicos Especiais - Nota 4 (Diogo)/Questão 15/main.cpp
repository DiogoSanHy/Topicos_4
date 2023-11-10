#include <iostream>

int main() {
    char sexo;
    int contagemMasculino = 0, contagemFeminino = 0;

    while (true) {
        std::cout << "Digite o sexo (m ou f, @ para encerrar): ";
        std::cin >> sexo;

        if (sexo == '@') {
            break;
        }

        if (sexo != 'm' && sexo != 'f') {
            std::cout << "Erro: Digite m, f ou @ para encerrar." << std::endl;
            continue;
        }

        if (sexo == 'm') {
            contagemMasculino++;
        } else {
            contagemFeminino++;
        }
    }

    std::cout << "Quantidade de pessoas do sexo masculino: " << contagemMasculino << std::endl;
    std::cout << "Quantidade de pessoas do sexo feminino: " << contagemFeminino << std::endl;

    return 0;
}

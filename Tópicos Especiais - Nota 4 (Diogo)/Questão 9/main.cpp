#include <iostream>
#include <string>

int main() {
    const int totalPessoas = 20;

    std::string nomes[totalPessoas];
    int idades[totalPessoas];
    char sexos[totalPessoas];

    for (int i = 0; i < totalPessoas; ++i) {
        std::cout << "Digite o nome da pessoa " << i + 1 << ": ";
        std::cin >> nomes[i];

        std::cout << "Digite a idade da pessoa " << i + 1 << ": ";
        std::cin >> idades[i];

        std::cout << "Digite o sexo da pessoa " << i + 1 << " (M/F): ";
        std::cin >> sexos[i];
    }

    std::cout << "\nPessoas do sexo masculino com mais de 21 anos:\n";
    for (int i = 0; i < totalPessoas; ++i) {
        if (sexos[i] == 'M' && idades[i] > 21) {
            std::cout << nomes[i] << std::endl;
        }
    }

    return 0;
}

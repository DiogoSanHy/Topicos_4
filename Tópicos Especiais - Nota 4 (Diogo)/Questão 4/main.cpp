#include <iostream>

int main() {
    int somatorio = 0;


    for (int i = 20; i <= 60; ++i) {

        somatorio += i;
    }

    std::cout << "O somatório dos números de 20 a 60 é: " << somatorio << std::endl;

    return 0;
}

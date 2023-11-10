#include <iostream>

int main() {
    int termoAnterior = 1;
    int termoAtual = 1;

    std::cout << termoAnterior << " " << termoAtual << " ";

    for (int i = 3; i <= 20; ++i) {
        int proximoTermo = termoAnterior + termoAtual;
        std::cout << proximoTermo << " ";

        termoAnterior = termoAtual;
        termoAtual = proximoTermo;
    }

    std::cout << std::endl;

    return 0;
}

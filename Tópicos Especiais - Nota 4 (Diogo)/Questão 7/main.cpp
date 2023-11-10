#include <iostream>
#include <cmath>

int main() {
    int A, B;

    std::cout << "Digite o valor de A: ";
    std::cin >> A;

    std::cout << "Digite o valor de B: ";
    std::cin >> B;
    
    double resultado = pow(A, B);

    std::cout << A << " elevado a " << B << " é: " << resultado << std::endl;

    return 0;
}

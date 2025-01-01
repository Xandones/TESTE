#include <iostream>
#include <cmath>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "As raízes são reais e diferentes." << std::endl;
        std::cout << "Raiz 1: " << root1 << std::endl;
        std::cout << "Raiz 2: " << root2 << std::endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "As raízes são reais e iguais." << std::endl;
        std::cout << "Raiz: " << root << std::endl;
    }
    else {
        std::cout << "As raízes são complexas e diferentes." << std::endl;
    }
}

int main() {
    double a, b, c;
    std::cout << "Digite os coeficientes a, b e c: ";
    std::cin >> a >> b >> c;
    solveQuadraticEquation(a, b, c);
    return 0;
}

#include "complex.h"

int main()
{
    std::cout << "------------" << std::endl;
    std::cout << "CONSTRUCTORS" << std::endl;
    std::cout << "------------" << std::endl;

    Complex c1 = Complex();
    Complex c2 = Complex(1, 1);
    Complex c3 = Complex(c2);
    Complex c4 = Complex(2);

    c1.show();
    c2.show();
    c3.show();
    c4.show();

    std::cout << "---------" << std::endl;
    std::cout << "ADDITIONS" << std::endl;
    std::cout << "---------" << std::endl;

    c1 = c1.add(c2);
    std::cout << "C1 = C1 + C2 - member function" << std::endl;
    c1.show();

    std::cout << "C1 = C1 + C2 - non-member function" << std::endl;
    c1 = add(c1, c2);
    c1.show();

    std::cout << "----------------" << std::endl;
    std::cout << "STREAM OPERATORS" << std::endl;
    std::cout << "----------------" << std::endl;

    std::cin >> c1;
    std::cout << c1 << std::endl;

    std::cout << "---------------" << std::endl;
    std::cout << "UNARY OPERATORS" << std::endl;
    std::cout << "---------------" << std::endl;

    -c1;
    std::cout<< "-c1: "  << c1 << std::endl;

    ++c1;
    std::cout << "++c1: " << c1 << std::endl;

    std::cout << "----------------" << std::endl;
    std::cout << "BINARY OPERATORS" << std::endl;
    std::cout << "----------------" << std::endl;

    std::cout << "c1 + c2: " << c1 + c2 << std::endl;

    std::cout << "c1 - c2: " << c1 - c2 << std::endl;

    std::cout << "c1 * c2: " << c1 * c2 << std::endl;

    std::cout << "--------------------" << std::endl;
    std::cout << "ASSIGNMENT OPERATORS" << std::endl;
    std::cout << "--------------------" << std::endl;

    c1 = c2;
    std::cout << "c1 = c2: " << c1 << std::endl;
}
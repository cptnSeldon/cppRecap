#include "complex.h"

/*Complex::Complex()
{
    //std::cout << "Constructor - default" << std::endl;
}*/

Complex::Complex(int _real, int _imaginary)
: real(_real), imaginary(_imaginary)
{
    //std::cout << "Constructor - parameterized" << std::endl;
}

Complex::Complex(const Complex & other)
: real(other.real), imaginary(other.imaginary)
{
    //std::cout << "Constructor - copy" << std::endl;
}

Complex::Complex(int value)
: real(value), imaginary(value)
{
    //std::cout << "Constructor - conversion" << std::endl;
}

void Complex::show()
{
    std::cout << "> "
              << this->real
              << std::showpos << this->imaginary << "i" << std::noshowpos
              << std::endl;
}

Complex Complex::add(const Complex & other)
{
    return Complex(this->real + other.real, this->imaginary + other.imaginary);
}

Complex add(const Complex & c1, const Complex & c2)
{
    return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}

Complex Complex::substract(const Complex & other)
{
    return Complex(this->real - other.real, this->imaginary - other.imaginary);
}

std::ostream& operator<<(std::ostream & os, const Complex & complex)
{
    return os << "> (" << complex.real << ", " << complex.imaginary << ")" << std::endl;
}

std::istream& operator>>(std::istream & is, Complex & complex)
{
    std::cout << "Please enter a value (int) for real and imaginary numbers: " << std::endl;

    is >> complex.real >> complex.imaginary;

    return is;
}

Complex Complex::operator-()
{
    this->real = - this->real;
    this->imaginary = - this->imaginary;

    return *this;
}

Complex Complex::operator++()
{
    ++this->real;
    ++this->imaginary;

    return *this;
}

Complex Complex::operator+(const Complex & other)
{
    return Complex(this->real + other.real, this->imaginary + other.imaginary);
}

Complex operator-(const Complex & c1, const Complex & c2)
{
    return Complex(c1.getReal() - c2.getReal(), c1.getImaginary() - c2.getImaginary());
}

Complex operator*(const Complex & c1, const Complex & c2)
{
    return Complex(c1.real * c2.real, c1.imaginary * c2.imaginary);
}

Complex & Complex::operator=(const Complex & other)
{
    if(&other == this)
    {
        return *this;
    }

    this->real = other.real;
    this->imaginary = other.imaginary;

    return *this;
}
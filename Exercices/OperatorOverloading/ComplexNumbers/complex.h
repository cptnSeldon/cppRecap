#pragma once

#include <iostream>     //cout, endl
#include <iomanip>      //showpos

//https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
//https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-160

/**
 * @brief Complex class
 *
 */
class Complex
{
    private:
        int real = 0;
        int imaginary = 0;

    public:
        /**
         * @brief Construct a new Complex object -> default
         *
         */
        Complex() = default;
        //Complex();
        /**
         * @brief Construct a new Complex object -> parameterized
         *
         * @param _real
         * @param _imaginary
         */
        Complex(int _real, int _imaginary);
        /**
         * @brief Construct a new Complex object -> copy
         *
         * @param other
         */
        Complex(const Complex & other);
        /**
         * @brief Construct a new Complex object -> conversion
         *
         * @param value
         */
        Complex(int value);

        /**
         * @brief Destroy the Complex object
         *
         */
        virtual ~Complex() = default;

        /**
         * @brief Get Complex 'real' attribute
         *
         * @return int
         */
        int getReal() const { return real; }
        /**
         * @brief Get Complex 'imaginary' attribute
         *
         * @return int
         */
        int getImaginary() const { return imaginary; }

        /**
         * @brief Set Complex 'real' attribute
         *
         * @param _real
         */
        void setReal(int _real) { this->real = _real; }
        /**
         * @brief Set Complex 'imaginary' attribute
         *
         * @param _imaginary
         */
        void setImaginary(int _imaginary) { this->imaginary = _imaginary; }

        //MEMBER FUNCTIONS
        /**
         * @brief Show Complex object
         *
         */
        void show();
        /**
         * @brief Add Complex objects
         *
         * @param other
         * @return Complex
         */
        Complex add(const Complex & other);
        /**
         * @brief Substract Complex objects
         *
         * @param other
         * @return Complex
         */
        Complex substract(const Complex & other);

        /**
         * @brief Ouput stream operator << overloading
         *
         * @param os
         * @param complex
         * @return std::ostream&
         */
        friend std::ostream& operator<<(std::ostream & os, const Complex & complex);
        /**
         * @brief Input stream operator >> overloading -> friend
         *
         * @param is
         * @param complex
         * @return std::istream&
         */
        friend std::istream& operator>>(std::istream & is, Complex & complex);

        /**
         * @brief Unary operator - overloading
         *
         * @return Complex
         */
        Complex operator-();
        /**
         * @brief Unary operator ++ overloading
         *
         * @return Complex
         */
        Complex operator++();

        /**
         * @brief Binary operator + overloading
         *
         * @param other
         * @return Complex
         */
        Complex operator+(const Complex & other);

        /**
         * @brief Binary operator * overloading -> friend
         *
         * @param c1
         * @param c2
         * @return Complex
         */
        friend Complex operator*(const Complex & c1, const Complex & c2);

        /**
         * @brief Assignment operator = overloading
         *
         * @param other
         * @return Complex&
         */
        Complex & operator=(const Complex & other);
};

/**
 * @brief Add function -> non-member
 *
 * @param c1
 * @param c2
 * @return Complex
 */
Complex add(const Complex & c1, const Complex & c2);

/**
 * @brief Binary operator - overloading -> non-member
 *
 * @param c1
 * @param c2
 * @return Complex
 */
Complex operator-(const Complex & c1, const Complex & c2);
/*
    Trigonometric Approximation using Taylor Series:
        Problem Statement:
            Write a function that approximates the sine of a value using the Taylor series expansion.
            The function should take two parameters:
                value (double): The angle in radians for which to calculate the sine.
                nth (int): The number of terms to use in the approximation.
            Return the approximate sine value as a double.
*/

#include <iostream>

double pow(double base, double exp) {
    double result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

double factorial(double n) {
    double result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

/*
    Sine Approximation Function:
        This function approximates the sine of a value using the Taylor series expansion.
        The series is defined as:
            sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
        where n! is the factorial of n.
*/
double sinApprox(double value, int nth) {
    double sin = 0.0;
    for (int i = 0; i < nth; ++i) {
        double term = (i % 2 == 0 ? 1 : -1) * (pow(value, 2 * i + 1) / factorial(2 * i + 1));
        sin += term;
    }
    return sin;
}

/*
    Cosine Approximation Function:
        This function approximates the cosine of a value using the Taylor series expansion.
        The series is defined as:
            cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...
        where n! is the factorial of n.
*/
double cosApprox(double value, int nth) {
    double cos = 0.0;
    for (int i = 0; i < nth; ++i) {
        double term = (i % 2 == 0 ? 1 : -1) * (pow(value, 2 * i) / (2 * i));
        cos += term;
    }
    return cos;
}

/*
    Tangent Approximation Function:
        This function approximates the tangent of a value using the sine and cosine approximations.
        The tangent is defined as:
            tan(x) = sin(x) / cos(x)
*/
double tanApprox(double value, int nth) {
    double sinValue = sinApprox(value, nth);
    double cosValue = cosApprox(value, nth);
    if (cosValue == 0) {
        std::cerr << "Error: Cosine is zero, tangent is undefined." << std::endl;
        return 0; // or handle the error as needed
    }
    return sinValue / cosValue;
}

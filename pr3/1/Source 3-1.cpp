#include <iostream>
#include <cmath>
#include "Header 3-1.h"

eq2::eq2(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}

void eq2::set(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}
double eq2::find_X() {
    if (D < 0) {
        std::cout << "Корней нет" << "\n";
        return 0;
    }
    else {
        if (D == 0) {
            std::cout << "Корень один: " << "\n";
            double x = (-b - sqrt(D)) / (2 * a);
            std::cout <<"X = " << x << "\n";
            return x;
        }
        else {
            std::cout << "Корней 2, наибольший: " << "\n";
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);
            if (x1 > x2) {
                std::cout <<"X1 = " << x1 << "\n";
                return x1;
            }
            else {
                std::cout <<"X2 = " << x2 << "\n";
                return x2;
            }
        }
    }
}
double eq2::find_Y(double x1) {
    std::cout << "Y = ";
    return a * x1 * x1 + b * x1 + c;
}
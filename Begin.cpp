#include "Begin.h"
#include <cmath>

const double PI = 3.14;

std::string Begin::begin10(int a, int b) {
    printf("Begin10\n");
    printf("Input parameters: a: %d, b: %d\n", a, b);
    int sum = a + b;
    int sub = a - b;
    int div = a * b;
    double ww = pow(a, 2) / pow(b, 2);
    printf("Sum: %d\n", sum);
    printf("Sub: %d\n", sub);
    printf("Div: %d\n", div);
    printf("Residual: %f\n\n", ww);
    return "Sum: " + std::to_string(sum) + ", Sub: " + std::to_string(sub) + ", Div:" + std::to_string(div)+ ", Residual: " + std::to_string(ww);
}

std::string Begin::begin15(double s) {
    printf("Begin10\n");
    printf("Circle Area: %f\n", s);
    double d = sqrt(4 * s / PI);
    double l = PI * d;
    printf("Circle diameter: %f\n", d);
    printf("Circle length: %f\n\n", l);
    return "Circle diameter: " + std::to_string(d) + ", Circle length: " + std::to_string(l);
}

std::string Begin::begin22(int x, int y) {
    printf("Begin22\n");
    int a = x;
    int b = y;
    int c = a;
    a = b;
    b = c;
    printf("x: %d\n", a);
    printf(" y: %d\n",b);
    return "b: " + std::to_string(a) + ", a: " + std::to_string(b);

    }
std::string Begin::begin7(int r) {
    return std::__cxx11::string();

}

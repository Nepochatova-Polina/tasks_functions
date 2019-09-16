#include "If.h"
#include <iostream>
using namespace std;

const std::string positive = "Positive number";
const std::string negative = "Negative number";
const std::string zero = "Zero number";

//if6
 int If::if6 (int firstNumber, int secondNumber) {
    printf("If6\n");
    if (firstNumber > secondNumber) {
        return firstNumber;
    } else {
        return secondNumber;
    }
}

//if14
int If::if14 (int firstn,int secondn, int thirdn) {
    printf("If14\n");

    if (firstn > secondn > thirdn) {
        return firstn;
    }
    if (firstn < secondn > thirdn) {
        return secondn;
    }

    if (firstn < secondn < thirdn){
        return thirdn;
    }
}

//if18
int If::if18 (int x,int y, int z) {
    printf("If18\n");
    if (y == z)
        return  1;
    else if (x == y)
        return  2;
    else return  3;
}
//if29
std::string If::if29 (int n) {
    printf("If29\n");

    if (n > 0) {
        return positive;
    }
    if (n < 0) {
        return negative;
    }
    if (n == 0){
        return zero;
    }

}
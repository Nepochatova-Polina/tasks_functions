#include<iostream>
#include "integer.h"
using namespace std;


int integer::integer2(long weight) {
    printf("Integer 2\n");
    const int t = 1000;
    int weightTons = weight / t;
    printf("Weight: %d\n\n", weightTons);
    return weightTons;
}


std::string integer::integer10(int a) {
    printf("Integer 10\n");
    int last = a % 10;
    int beforeLast = (a - last) / 10 % 10;
    printf("%i\n%i\n\n", last, beforeLast);
    return "Last: " + std::to_string(last) + ", before last: " + std::to_string(beforeLast);
}

int integer::integer20(int Minutes) {
    printf("Integer 20\n");
    int k = 60;
    int Hours;
    printf(" Hours: %d\n\n", Minutes / k);
    return Hours;
}


int integer::integer26(int dayOfTheYear) {
    int days = dayOfTheYear % 7;
    int day = 1 + days;
    printf(" Integer 26\n");
    printf(" Day number: %d\n", day);
    return day;
}


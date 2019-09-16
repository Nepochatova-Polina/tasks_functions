#include<iostream>
#include <cstdio>
#include "Boolean.h"

    //Boolean 7
bool Boolean::boolean7(int a,int b,int c) {
    printf("Boolean 7\n");
    bool result = ((a < b) & (b < c)) || ((a > b) & (b > c));
    printf("%d\n\n", result);
    return result;
    }
     //Boolean 15
bool Boolean::boolean15( int d, int e, int f){
    printf("Boolean 15\n");
    bool result2 = ((d <= 0) & (e > 0) & (f > 0)) || ((d > 0) & ( e <= 0) & (f > 0)) || ((d > 0) & (e > 0) & (f <= 0));
    printf( "%d\n\n",result2);
    return result2;
    }

//Boolean 26
bool Boolean:: boolean26( int x, int y) {
    printf("Boolean 26\n");
    int coordinateQuarter = (x > 0) & ( y < 0);
    printf("%d\n\n", coordinateQuarter);
    return coordinateQuarter;
    }

    //Boolean 33
bool Boolean:: boolean33( int firstTerm, int secondTerm, int thirdTerm){
    printf(" Boolean 33\n");
    int sum = (firstTerm + secondTerm == thirdTerm) | (firstTerm + thirdTerm == secondTerm) | (secondTerm + thirdTerm == firstTerm);

    printf("%d\n\n", sum);

}



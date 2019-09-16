#include <iostream>
#include "integer.h"
#include "Boolean.h"
#include "Begin.h"
#include "If.h"
using namespace std;

int main() {

// Integer 2
    long weightFromUserInput = 34567;
    int tons = integer::integer2(weightFromUserInput);

// Integer 10
    const int c = 3456;
    integer::integer10(c);

//Integer 20
    const int Minutes = 568793;
    int Hours = integer::integer20(Minutes);

//Integer 26
    const int day = 55;
    int DayOfTheWeek = integer::integer26(day);



//Boolean7
    const int first = 234;
    const int average = 121;
    const int last = 435;
    bool result =Boolean::boolean7(first, average , last);

//Boolean15
     int firstPositive = 23;
     int secondPositive= 56;
     int unknown = 33;
    bool result2 = Boolean::boolean15(firstPositive , secondPositive, unknown);

//Boolean26
    const int xCoordinate = 3;
    const int yCoordinate = -5;
    bool coordinateQuarter = Boolean:: boolean26(xCoordinate,yCoordinate);

//Boolean33
     int firstTerm = 9;
     int secondTerm = 3;
     int thirdTerm = 12;
    bool sum = Boolean:: boolean33( firstTerm, secondTerm, thirdTerm);

//Begin7
    const int circleRadius = 7;
    std::string resBegin7 = Begin::begin7(circleRadius);

//Begin10
   const int a = 13;
    const int b = 34;
    std::string resBegin10 = Begin::begin10(a, b);

//Begin15
    double circleArea = 98;
    std::string resBegin15 = Begin::begin15(circleArea);

//Begin22
    const int First = 22;
    const int second = 12;
    std::string resBegin22 = Begin::begin22(First, second);


//If6
    const int firstNumber = 12;
    const int secondNumber = 11;
    int if6Result = If::if6(firstNumber, secondNumber);
    cout << "biggest:" << if6Result << endl;


 //If14
    int firstn = 442;
    int secondn= 293;
    int thirdn = 465;
    int if14Result = If::if14(firstn, secondn, thirdn);
    cout << "biggest:" << if14Result << endl;

//If18
    int x = 23;
    int y = 23;
    int z = 43;
    int if18Result = If::if18(x,y,z);
    cout << "serialNumber:" << if18Result << endl;

 //If29
    int n = 4;
    basic_string<char> if29Result = If::if29(n);
    cout << "kindOfNumber" << if29Result << endl;

    return 0;
}
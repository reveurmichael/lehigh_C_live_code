#include <stdio.h>

int checkIfANumberIsEven(int number)
{
    return 1 - number % 2;
}

char* getDayOfTheWeek(int dayNumber)
{
    switch (dayNumber)
    {
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
        default:
            return "FinalExamDay";
    }
}

double computePIWithSeriesExpansion(int N)
{
    double pi = 1.0;
    int n = 3;
    double sign = -1;
    while(n <= N)
    {
        pi += sign / n;
        sign *= (-1);
        n += 2;
    }
    pi *= 4;
    return pi;
}

void check_homework_week_1()
{
    printf("checkIfANumberIsEven(6): %d\n", checkIfANumberIsEven(6));
    printf("checkIfANumberIsEven(7): %d\n", checkIfANumberIsEven(7));
    printf("checkIfANumberIsEven(8): %d\n", checkIfANumberIsEven(8));
    printf("checkIfANumberIsEven(9): %d\n", checkIfANumberIsEven(9));
    printf("checkIfANumberIsEven(10): %d\n", checkIfANumberIsEven(10));
    printf("getDayOfTheWeek(1): %s\n", getDayOfTheWeek(1));
    printf("getDayOfTheWeek(2): %s\n", getDayOfTheWeek(2));
    printf("getDayOfTheWeek(3): %s\n", getDayOfTheWeek(3));
    printf("getDayOfTheWeek(4): %s\n", getDayOfTheWeek(4));
    printf("getDayOfTheWeek(5): %s\n", getDayOfTheWeek(5));
    printf("getDayOfTheWeek(6): %s\n", getDayOfTheWeek(6));
    printf("getDayOfTheWeek(7): %s\n", getDayOfTheWeek(7));
    printf("getDayOfTheWeek(8): %s\n", getDayOfTheWeek(8));
    printf("computePIWithSeriesExpansion(20): %f\n", computePIWithSeriesExpansion(20));
    printf("computePIWithSeriesExpansion(200): %f\n", computePIWithSeriesExpansion(200));
    printf("computePIWithSeriesExpansion(2000): %f\n", computePIWithSeriesExpansion(2000));
    printf("computePIWithSeriesExpansion(20000): %f\n", computePIWithSeriesExpansion(20000));
    printf("computePIWithSeriesExpansion(200000): %f\n", computePIWithSeriesExpansion(200000));
    printf("computePIWithSeriesExpansion(2000000): %f\n", computePIWithSeriesExpansion(2000000));
}

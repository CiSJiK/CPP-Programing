#include <iostream>
#include "Calculator.h"

double Calculator::Add(double a, double b)
{
    opCount++;
    return a + b;
}
int Calculator::Add(int a, int b)
{
    opCount++;
    return a + b;
}
double Calculator::Div(double a, double b)
{
    opCount++;
    if (b == 0)
    {
        std::cout << "Can't divive as 0" << std::endl;
        return 0;
    }
    return a / b;
}
int Calculator::Div(int  a, int  b)
{
    opCount++;
    if (b == 0)
    {
        std::cout << "Can't divive as 0" << std::endl;
        return 0;
    }
    return a / b;
}
double Calculator::Min(double  a, double  b)
{
    opCount++;
    return a - b;
}
int Calculator::Min(int  a, int  b)
{
    opCount++;
    return a - b;
}
double Calculator::Mul(double  a, double  b)
{
    opCount++;
    return a * b;
}
int Calculator::Mul(int  a, int  b)
{
    opCount++;
    return a * b;
}
void Calculator::ShowOpCount()
{
    std::cout << opCount << std::endl;
}
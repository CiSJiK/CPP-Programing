#include <iostream>

class Calculator
{
    public:
        double Add(double a, double b);
        int Add(int a, int b);
        double Div(double a, double b);
        int Div(int a, int b);
        double Min(double a, double b);
        int Min(int a, int b);
        double Mul(double a, double b);
        int Mul(int a, int b);
        inline void Init();
        void ShowOpCount();
    private:
        int opCount;
};
inline void Calculator::Init()
{
    opCount = 0;
}

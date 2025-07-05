#include <iostream>

int main(void)
{
    const int num=12;
    const int &ref = num;
    const int *p = &ref;

    std::cout << *p << std::endl;
    return 0;
}
#include <iostream>

using namespace std;

void intagerUp(int &ref)
{
    ref++;
}
void intagerRevert(int &ref)
{
    ref *= -1;
}

int main(void)
{
    int num = -3;
    intagerUp(num);
    cout << num << endl;
    intagerRevert(num);
    cout << num << endl;
    return 0;
}
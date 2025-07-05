#include <iostream>
#include "Printer.h"
#define MAX_SIZE 500

void Printer::SetString(char *inputs)
{
    strcpy(string, inputs);
}

void Printer::ShowString()
{
    std::cout << string << std::endl;
}

Printer::Printer()
{
    string = new char[MAX_SIZE];
}
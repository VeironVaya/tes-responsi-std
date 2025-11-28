#ifndef STEK_H_INCLUDED
#define STEK_H_INCLUDED

#include <iostream>
using namespace std;

struct Processor
{
    string pid;
    int size;
};

typedef Processor Infotype;

struct Stek
{
    Infotype stekArr[20];
    int top;
};

void createStack(Stek &stek);
Infotype inputData();
void push(Stek &stek, Infotype data);
void pop(Stek &stek);
void printStack(Stek &stek);

#endif // STEK_H_INCLUDED

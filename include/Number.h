#include <iostream>
#ifndef NUMBER_H
#define NUMBER_H


class Number
{
    public:
        //constructors
        Number(float, float);
        Number(float);
        Number();
        //operations
        void displayNumber();
       // void addNumber(Number);
        Number addNumber(Number);
        void voidMultiplyNumber(Number);
        Number multiplyNumber(Number);
        float getReal();
        float getImg();

    private:
        //data
        float real;
        float imaginary;
};

#endif // NUMBER_H

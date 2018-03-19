#include "Number.h"

Number::Number(float rl, float img)
{
    real = rl;
    imaginary = img;
}

Number::Number(float rl)
{
    real = rl;
    imaginary = 0;
}

Number::Number()
{
    real = 0;
    imaginary = 0;
}

void Number::displayNumber()
{
    if(imaginary == 0)
    {
        std::cout << real;
    }

    if(imaginary < 0)
    {
        std::cout << real << " - " << imaginary << "i ";
    }
    if(imaginary > 0)
    {
        std::cout<< real << " + " << imaginary << "i ";
    }
}

/*void Number::addNumber(Number x)
{
    real += x.getReal();
    imaginary += x.getImg();
} */

Number Number::addNumber(Number x)
{
    Number sum;
    sum.real = real + x.getReal();
    sum.imaginary = imaginary + x.getImg();
    return sum;
}

void Number::voidMultiplyNumber(Number x)
{
    real *= x.getReal();
    imaginary *= x.getImg();
}

Number Number::multiplyNumber(Number x)
{
    Number product(1, 0);
    product.real = real * x.getReal();
    product.imaginary = imaginary * x.getImg();
    return product;
}


float Number::getReal() { return real; }

float Number::getImg() { return imaginary; }



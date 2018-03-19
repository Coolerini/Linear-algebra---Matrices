#include <iostream>
#include "Number.h"
#include "Matrix.h"

int main()
{
    /*Matrix test;
    test.printMatrix();
    Matrix test2;
    test2.printMatrix();
    std::cout <<" " << std::endl;
    test.addMatrix(test2);
    test.printMatrix();
    */
    std::cout << "Linear algebra - ex. 1 - C++" << std::endl;
    std::cout << std::endl;
    while(1)
    {
        int option;
        std::cout << "***** Main menu *****" << std::endl;
        std::cout << "1. Real matrices addition" << std::endl;
        std::cout << "2. Real matrix multiplication by a real number" << std::endl;
        std::cout << "3. Real matrix multiplication by another real matrix" << std::endl;
        std::cout << "4. Transpose of the real matrix" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cin >> option;

        switch(option)
        {
            case 1:
            {
                Matrix x;
                Matrix y;
                x.addMatrix(y);
                x.printMatrix();
            break;
            }
            case 2:
            {
                float rl, img;
                Matrix x;
                std::cout << "Define a scalar real part: ";
                std::cin >> rl;
                std::cout << "Define a scalar imaginary part: ";
                std::cin >> img;
                Number scalar(rl, img);
                x.multiplyMatrix(scalar);
                x.printMatrix();
                break;
            }
            case 3:
            {
                Matrix x;
                Matrix y;
                x.printMatrix(x.multiplyMatrix(y));
                break;
            }

            case 4:
            {
                Matrix x;
                x.printTransposeMatrix();
                break;
            }

            case 5:
                return 0;
                break;

            default:
                std::cout << "Wrong key has been pressed!";
                break;
        }
    }
}

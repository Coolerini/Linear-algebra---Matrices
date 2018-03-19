#include "Matrix.h"

Matrix::Matrix()
{
    float rl;
    float img;

    std::cout << "Enter number of columns:" << std::endl;
    std::cin >> n;
    std::cout << "Enter number of rows:" << std::endl;
    std::cin >> m;

    container = new Number*[m];
    for(int i = 0; i < m; i++)
        container[i] = new Number[n];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            {
                std::cout << "Number [" << j << "][" << i << "] real part: ";
                std::cin >> rl;
                std::cout << "Number [" << j << "][" << i << "] imaginary part: ";
                std::cin >> img;
                container[j][i] = Number(rl, img);
            }
}

Matrix::Matrix(int n, int m)
{
    container = new Number*[m];
    for(int i = 0; i < m; i++)
        container[i] = new Number[n];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            {
                container[j][i] = Number();
            }
}

Number Matrix::getNumber(int i, int j) { return container[i][j]; }

void Matrix::addMatrix(Matrix x)
{
      for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            container[i][j] = container[i][j].addNumber(x.getNumber(i, j));

}

void Matrix::multiplyMatrix(Number scalar)
{
      for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
                container[i][j] = container[i][j].multiplyNumber(scalar);
}

Matrix Matrix::multiplyMatrix(Matrix x)
{
    int n2 = x.getColumns();
    Matrix outputmatrix(n,n2);
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n2; j++)
            for(int k = 0; k < n; k++)
            {
                Number temp = container[i][k].multiplyNumber(x.container[k][j]);
                outputmatrix.container[i][j].voidMultiplyNumber(temp);
            }
    return outputmatrix;
}


void Matrix::printMatrix()
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            container[j][i].displayNumber();
            std::cout << " ";
        }
        std::cout << "" << std::endl;
    }
}

void Matrix::printMatrix(Matrix print)
{
    int m = print.getRows();
    int n = print.getColumns();

     for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            print.container[i][j].displayNumber();
            std::cout << " ";
        }
        std::cout << "" << std::endl;
    }
}

void Matrix::printTransposeMatrix()
{
      for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            container[i][j].displayNumber();
            std::cout << " ";
        }
        std::cout << "" << std::endl;
    }
}

int Matrix::getColumns() { return n; }
int Matrix::getRows() { return m; }

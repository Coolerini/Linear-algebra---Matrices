#include <vector>
#include "Number.h"
#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
    public:
        Matrix();
        Matrix(int, int);
        void addMatrix(Matrix);
        Matrix multiplyMatrix(Matrix);
        void multiplyMatrix(Number);
        void printMatrix();
        void printMatrix(Matrix);
        void printTransposeMatrix();
        Number getNumber(int, int);
        int getColumns();
        int getRows();

    private:
        int n;
        int m;
        Number ** container;
};

#endif // MATRIX_H

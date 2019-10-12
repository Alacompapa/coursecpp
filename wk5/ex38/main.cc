#include <iostream>
using namespace std;

void inv_identity(int (*rowStart)[10])
{
    for (int (*rowPtr)[10] = rowStart;  // get address of start of row
            rowPtr != rowStart + 10;    
            ++rowPtr)                   // move rowPtr 10 ints up 
        for (int *colStart = *rowPtr, *colPtr = *rowPtr; 
                colPtr != colStart + 10;
                ++colPtr)               // move colPtr 1 int up
                                        // 'vertical' distance equal to 
                                        // 'horizontal' distance means diagonal
            *colPtr = (rowPtr-rowStart)==(colPtr-colStart) ? 0 : 1;
}

int main(int argc, char **argv)
{
    int square[10][10]; 
    int (*row)[10] = square;                // row is a ptr to 10 ints

    inv_identity(row);
    for (size_t idx = 0; idx != 100; ++idx)
    {
        if (idx % 10 == 0)
            cout << '\n';
        cout << *((*square) + idx);
    }
}

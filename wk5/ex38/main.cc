#include <iostream>
using namespace std;

void inv_identity(int (*rowStart)[10]);

int main(int argc, char **argv)
{
    int square[10][10]; 
    int (*row)[10] = square;                // row is a ptr to 10 ints

    inv_identity(row);
}

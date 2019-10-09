#include <iostream>
using namespace std;

int main()
{
    int x[8];
    cout << &x[10] - &x[3] << '\n';
}

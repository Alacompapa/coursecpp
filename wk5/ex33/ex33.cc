#include <iostream>

using namespace std;

int main()
{
    int array[10][15];
    cout << &array[0][14] << " " << &array[1][0] << '\n';


  	cout << &array[1] << '\n' << &array[1][0] << '\n';
}

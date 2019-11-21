#include <iostream>

using namespace std;

void printValue(const int &parameter)
{
	cout << parameter << '\n';
}

int main(int argc, char** argv)
{
    int x = 7;
	printValue(x);
}

#include <iostream>

using namespace std;

int addition(const int &parameter1,const int &parameter2)
{
	return parameter1 + parameter2;
}

int main(int argc, char** argv)
{
	int parameter1 = 3;
	int parameter2 = 4;
	int add_result = addition(parameter1, parameter2);
	cout << add_result;
}

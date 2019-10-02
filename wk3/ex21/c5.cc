#include <iostream>

using namespace std;

int toDogYears(int &parameter)
{
	return parameter * 7;
}

int main(int argc, char** argv)
{
	int age = 57;
	cout <<  age << " in dog years is " << toDogYears(age) << '\n';
}

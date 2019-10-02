#include <iostream>

using namespace std;

string addStrings(const string &parameter)
{
    return "Hey, you haven't said " + parameter + '\n';
}

int main(int argc, char** argv)
{
    string hello = "hello";
	cout << addStrings(hello);
}

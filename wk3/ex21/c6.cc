#include <iostream>

using namespace std;

string addDesert(string &parameter)
{
    return parameter + "chocolate ice cream\n";
}

int main(int argc, char** argv)
{
	string menu = "Soup, meatballs and ";
	cout << addDesert(menu);
}

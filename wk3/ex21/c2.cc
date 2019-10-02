#include <iostream>
using namespace std;

string addFriend(string parameter)
{
	return parameter + "friends";
}

int main(int argc, char** argv)
{
    string one = "Hello my ";
    string final = addFriend(one);
	cout << final << '\n';
}

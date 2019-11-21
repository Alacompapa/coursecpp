#include <iostream>

using namespace std;

string greetHarry(string greeting)
{
    return greeting + " Harry!\n";
}

int main(int argc, char **argv)
{
    cout << greetHarry("Hello");
}

#include <iostream>

using namespace std;

string erase(string &&parameter1)
{
    parameter1.clear();
    parameter1 = "Erased\n";
    return parameter1;
}

int main(int argc, char** argv)
{
   cout << erase("Erase me");
}

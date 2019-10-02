#include <iostream>

using namespace std;

int Return_one(int &&parameter1)
{
    parameter1 = 1;
    return parameter1;
}

int main(int argc, char** argv)
{
    cout << Return_one(43) << '\n';
}

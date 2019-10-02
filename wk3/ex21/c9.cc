#include <iostream>

using namespace std;

int returnOne(int &&parameter1)
{
    parameter1 = 1;
    return parameter1;
}

int main(int argc, char** argv)
{
    cout << returnOne(43) << '\n';
}

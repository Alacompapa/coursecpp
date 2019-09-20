#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    cout << "List of ASCII (including Upper and Lower Case)\n";
    for (char A = 32; A < 127; ++A) {
        cout << A << ' ';
        if (isalpha(A))
            cout << ' ';
    }
}

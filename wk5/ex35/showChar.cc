#include "main.ih"

void showChar(unsigned char ch)
{
    cout << "char ";

    if (ch == 10)
        cout << "\'\\n\'";
    else if (ch == 9)
        cout << "\'\\t\'";
    else if (ch == 32)
        cout << "\' \'";
    else if (ch > 32 and ch < 127)
        cout << ch;
    else
        cout << static_cast<int>(ch);

    cout << '\n';
}

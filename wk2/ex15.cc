/*
./ex15 1011110101011011 ror
1101111010101101 57005 dead

./ex15 1101111101110111 rol
1011111011101111 48879 beef

*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    string binnumber = argv[1];                 // store the argument
    string direction = argv[2];
    size_t numbits = binnumber.length();
    size_t value = stoi(binnumber, 0, 2);       // convert arg to binary
    size_t newValue;

    if (direction == "ror")                     // rotate the binary numbers
        newValue = (value >> 1) + (value % 2 == 1 ? 1 << (numbits - 1) : 0);
    else if (direction == "rol")
        newValue =
            (value << 1) + ((value >> (numbits - 1)) % 2 == 1 ? 1 : 0) - (1 << numbits);

    string binRepr;
    string hexRepr;

    for (size_t bitcount = numbits; bitcount--; )
        binRepr += (newValue >> bitcount) % 2 ? '1' : '0';

                                                // using integer division
    for (size_t hexValue = newValue, hexRemain = hexValue % 16; hexValue != 0; hexValue /= 16)
    {
        switch (hexRemain)
        {                                       // in hex we have more than
            case 10:                            // 10 digits
                hexRepr.insert(0, "a");
                break;
            case 11:
                hexRepr.insert(0, "b");
                break;
            case 12:
                hexRepr.insert(0, "c");
                break;
            case 13:
                hexRepr.insert(0, "d");
                break;
            case 14:
                hexRepr.insert(0, "e");
                break;
            case 15:
                hexRepr.insert(0, "f");
                break;
            default:
                hexRepr.insert(0, to_string(hexRemain));
                break;
        }
    }

    cout << binRepr << ' ' << newValue << ' ' << hexRepr << '\n';
}

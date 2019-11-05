#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned char ch;
    size_t bytecount = 0;
    size_t bitcount = 0;
    unsigned char buffer = 0;
    std::ifstream infile("/tmp/test");
    std::ofstream outfile("test2");
    while (infile >> std::noskipws >> ch){
        if (bitcount == 8){
            outfile << buffer;
            bitcount = 0;
            buffer = 0;
        }
        buffer <<= 2;
        ++bytecount;

        switch (ch){
            case 'A' : break;
            case 'C' : buffer |= (1 << (bitcount/2));
            case 'G' : buffer |= (2 << (bitcount/2));
            case 'T' : buffer |= (3 << (bitcount/2));
        }
        cout << buffer;
        bitcount = bitcount + 2;
    }
    if (bitcount > 0)
        outfile << buffer;
    outfile.close();
}

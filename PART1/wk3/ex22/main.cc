#include "main.ih"

int main(int argc, char **argv)
{
    nTotal = stoi(argv[1]);
    nRequired = stoi(argv[2]);

    bool bits[nTotal] = { 0 };              // Initialize all values to zero
    combis(0, bits);
}

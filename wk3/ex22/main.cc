#include "main.ih"

int main(int argc, char **argv)
{
    nTotal = stoi(argv[1]);
    nRequired = stoi(argv[2]);

    bool bits[4] = { 1,0,1,1};

    combis(0, bits);
}

#include "main.ih"

tuple<size_t, double, double, size_t> argGen(int argc, char **argv)
{
    size_t year = stoul(argv[1]);
    double amount = stod(argv[2]);
    double interest = stod(argv[3]);
    size_t idx = 0;

    return tuple{ year, amount, interest, idx };
}

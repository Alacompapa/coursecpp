#include "main.ih"

int sum(int argc, char *argv[])
{
    int summed = 0;
    for (size_t idx = 1; idx != argc; ++idx)    // Loop for amount of args
        summed += stoi(argv[idx]);              // Add to sum

    return summed;
}

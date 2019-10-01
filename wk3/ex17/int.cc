#include "main.ih"

int sum(int argc, char *argv[])
{
    int summed = 0;
    for (int idx = 1; idx < argc; ++idx)    // Loop for amount of args
    {
        int num = stoi(argv[idx]);          // convert the arg to int
        summed += num;                      // Add to sum
    }
    return summed;
}

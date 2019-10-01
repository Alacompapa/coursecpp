#include "main.ih"

int sum(int argc, char *argv[])
{
    size_t summed = 0;
    for (int i = 1;(i < argc);++i)
    {
        int num = stol(argv[i]);
        summed += num;
    }
    return summed;
}

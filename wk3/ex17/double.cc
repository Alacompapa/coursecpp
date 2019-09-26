#include "main.ih"

double sum(double argc, char *argv[])
{
    double summed = 0;
    int argcount = static_cast<int>(argc);
    for (int i = 1;(i < argcount);++i)
    {
        char* end;
        double num = strtod(argv[i], &end);
        summed += num;
    }
    return summed;
}

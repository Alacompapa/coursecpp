#include "main.ih"

double sum(int argc, char *argv[])
{
    double summed = 0;
    for (int i = 1;(i < argc);++i)
    {
        char* end;
        double num = strtod(argv[i], &end);
        summed += num;
    }
    return summed;
}

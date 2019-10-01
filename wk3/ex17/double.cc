#include "main.ih"

double sum(double argc, char *argv[])
{
    double summed = 0;                      
    int argcount = static_cast<int>(argc);
    for (int i = 1;(i < argcount);++i)
    {
        double num = stod(argv[i]);
        summed += num;
    }
    return summed;
}

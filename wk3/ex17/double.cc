#include "main.ih"

double sum(double argc, char *argv[])
{
    double summed = 0;
    int argcount = static_cast<int>(argc);      // Cast argc to int
    for (int idx = 1; idx < argcount; ++idx)  // Loop on amount of argc
    {
        double num = stod(argv[idx]);           // Convert str to double
        summed += num;                          // Add double to num
    }
    return summed;
}

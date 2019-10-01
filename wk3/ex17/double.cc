#include "main.ih"

double sum(double argc, char *argv[])
{
    double summed = 0;                         // Loop over amount of args
    for (size_t idx = 1; idx != static_cast<size_t>(argc); ++idx)  
        summed += stod(argv[idx]);             // Add double to sum

    return summed;
}

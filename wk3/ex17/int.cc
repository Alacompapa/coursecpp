#include "main.ih"

int sum(int argc, char *argv[])
{
    char* end;
    size_t summed = 0;
    for (int i = 1, base = 10;(i < argc);++i)
    {
        size_t num = strtol(argv[i], &end, base);
        summed += num;
    }
    return summed;
}

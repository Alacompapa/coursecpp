#include "main.ih"

void callValue(string const &prog)
{
    for (size_t idx = 0; idx < 10'000'000; ++idx)
        fun(prog);
}

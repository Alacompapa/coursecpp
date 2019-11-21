#include "numbers.ih"

Numbers::Numbers(Numbers &&tmp) // move constructor
:
    d_numbers( std::move(tmp.d_numbers) ),
    d_count( std::move(tmp.d_count) )
{
}

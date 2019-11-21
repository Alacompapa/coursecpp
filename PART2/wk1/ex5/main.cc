#include <iostream>

namespace First
{
    enum Enum {};
    void fun(First::Enum symbol);
}

namespace Second
{
    void fun(First::Enum symbol);
}

void fun(First::Enum symbol);

int main()
{
    First::Enum symbol;
    fun(symbol);
    Second::fun(symbol);
}

void First::fun(First::Enum symbol)
{
    std::cout << "first fun \n";
}
void Second::fun(First::Enum symbol)
{
    std::cout << "second fun \n";
}

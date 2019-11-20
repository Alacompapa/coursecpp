#include "main.ih"
#include <iostream>

int main(int argc, char **argv)
{
    const Strings strings{ argc, argv };
    Strings strings2{ strings };
    cout << strings2.size();
}

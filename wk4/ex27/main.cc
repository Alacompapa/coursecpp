#include "main.ih"

int main()
{
    Person rick{ "Rick James", "Funkytown 12", "123456789", 80 };
    rick.insert(std::cout);
    rick.extract(std::cin);
}

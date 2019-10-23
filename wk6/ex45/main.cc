#include "main.ih"

int main(int argc, char **argv)
{
    int (*order)(string **first, string **second);
    order = &increasing;
    Sort sortObj = Sort(order); // test code
}

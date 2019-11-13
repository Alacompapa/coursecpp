#include "main.ih"

int main()
{
    Demo demo1 = factory();

    Demo demo2{ demo1 };

    demo2 = move(demo);
}

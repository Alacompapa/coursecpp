#include "main.ih"

int main()
{
                                        // Copy elision applied 
                                        // factory returns local variable 
    Demo elided = factory();
                                        // Move constructor used
                                        // Argument to ctor needs to be 
                                        // rvalue reference: use std::move
    Demo moveConstructed{ std::move(factory()) }; 
                                        // Copy assignment used
    Demo normal;
    Demo copied;
    copied = normal;
                                        // Move assignment used
    Demo moved;
    moved = factory();
}

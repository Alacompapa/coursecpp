#include "main.ih"

int main()
{
 copy elision example: returning a local variable
    Demo elidedDemo = factory();

 //move constructor used
 //only works when suppressing copy elision e.g. using std::move when returning
    Demo moveConstructed{ factory() }; 

 copy assignment used
    Demo normal;
    Demo copied;
    copied = normal;

 move assignment used
    Demo moved;
    moved = factory();


    Demo demo1 = factory(); // copy elision

    Demo demo2{ demo1 }; // copy assignment

    demo2 = move(demo1); // move assignment
}

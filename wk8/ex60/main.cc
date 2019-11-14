#include "main.ih"

Demo localVariableReturn()
{
    Demo local_demo;                // local variable is not copied when
    return local_demo;              // returned
}

int main()
{
// copy elision example: returning a local variable
    //Demo elidedDemo = localVariableReturn();

// move constructor used
// doesnt work
    Demo moveConstructed{ localVariableReturn() }; 

// copy assignment used
    //Demo normal;
    //Demo copied;
    //copied = normal;

// move assignment used
    //Demo moved;
    //moved = factory();


    //Demo demo1 = factory(); // copy elision

    //Demo demo2{ demo1 }; // ??

    //demo2 = move(demo1); // move assignment
}

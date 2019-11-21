# include <iostream>

using namespace std;

class Demo
{
    public:
        //Demo(){ cout << "Default constructor\n";}
        //Demo(int x){ cout << "Other constructor\n"; d_x = x;} // other constructor
        //Demo(Demo const &other){ cout << "Copy constructor\n";} // copy constructor
        //Demo(Demo &&tmp){ cout << "Move constructor\n";} // move constructor
        Demo &operator=(Demo const &other){ cout << "Copy assignment\n";} // copy
        //Demo &operator=(Demo &&tmp){ cout << "Move assignment\n";} // move
        int d_x;
};

//Demo factory()
//{
//    cout << "Factory\n";
//    return Demo();
//}

int main()
{
    Demo demo();
    Demo omed = std::move(demo);
    //demo = std::move(omed);
    //Demo copied = demo;
    //Demo copied = std::move(Demo(4));
    cout << &demo << '\n' << &omed;
}

#include <iostream>
#include <iomanip>

using namespace std;

ostream &now(ostream &stream)       // manipulator for human readable time
{
    time_t tm {time(0)};
    return stream << put_time(localtime(&tm), "%c");
}

int main()
{
    time_t tm {time(0)};
    cout << "I (a computer) tell time as " << tm << 
            " seconds since the Epoch\n" << 
            "You (a human) would tell time more akin to " << now << 
            ", right?\n";
}

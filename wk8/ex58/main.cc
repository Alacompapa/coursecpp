#include "main.ih"

int main(int argc, char **argv)
{
    Numbers numbers { 10, 1 }; // Initialize to 1
    Numbers numbers2 { 10 }; // Default initialization
    int *numbers3 = new int[10](); // Initialize to 0

    numbers.at(3, 4);
    numbers.write(cout);
    cout << numbers.length() << '\n';

    numbers2.at(3,4);
    numbers2.write(cout); // Will output 0004000000
    cout << numbers2.length() << '\n';

    for (size_t idx = 0; idx != 10; ++idx) {    // Will output 0000000000
        cout << numbers3[idx];
    }
    cout << '\n';

}

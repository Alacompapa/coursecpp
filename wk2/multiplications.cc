#include <iostream> // For using cout and cin

using namespace std; // Use the std namespace

int main(int argc, char *argv[])
{
    int input = stoi(argv[1]); // Convert the argument from string to integer

    // We want to create a multiplication table up to and including 10
    for (size_t count = 1; count != 11 ; ++count)
        // Output contents to cout stream
        cout << count << " * " << input << " = " << count * input << '\n';
}

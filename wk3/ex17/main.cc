#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 0;

    for (int counter = 0; counter < argc; ++counter)
    {
    string str = argv[counter];         // Take a string from argv
    if (str.find("."))                  // If we find dots in it
    {                                   // Convert argc to double
            double argcount = static_cast<double>(argc);
                                        // Get the sum of the doubles
            double summed = sum(argcount, argv);
            cout << summed << '\n';
            return 0;
        }
    }
                                        // Runs if no dots
    int summed = sum(argc, argv);           // Get the sum of all elements in
    cout << summed << '\n';                 // argc
}

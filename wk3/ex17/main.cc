#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 0;

    for (int counter = 0; counter < argc; ++counter)
    {
    string str = argv[counter];         // Take a string from argv
    if (str.find("."))                  // If we find dots in it
        {
                                        // Convert argc to double
            double argcount = static_cast<double>(argc);
                                        // Get the sum of the doubles
            double summed = sum(argcount, argv);
            cout << summed << '\n';
            return 0;
        }
    }
                                        // This part will only run if we
                                        // didn't find a dot
int summed = sum(argc, argv);           // Get the sum of all elements in argc
    cout << summed << '\n';
}

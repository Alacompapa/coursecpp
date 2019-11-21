#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 0;

    for (size_t counter = 0; counter != argc; ++counter)
    {
        string argument = argv[counter];         // Take a string from argv
        if (argument.find(".") == string::npos)  // No dots in arg, check next
            continue;
                                                 // Convert argc to double
                                                 // Get the sum of the doubles
        double summed = sum(argc, argv, counter);
        cout << summed << '\n';
        return 0;
    }

    int summed = sum(argc, argv);                // Runs if no dots
    cout << summed << '\n';
}

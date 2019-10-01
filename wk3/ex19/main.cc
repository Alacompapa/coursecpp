#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        usage("wc");
        return 1;
    }

    string argument = argv[1];
    char option = argument[1];              // Select the letter in the arg
    switch (option)
    {
        case 'c':
            countChars();
            break;
        case 'w':
            countWords();
            break;
        case 'l':
            countLines();
            break;
        default:
            usage("wc");                    // no correct args given
            break;
    }
}

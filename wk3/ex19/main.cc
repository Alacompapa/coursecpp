#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc == 1)
        return 1;
    
    switch(argument = argv[1]; argument)
    {
        case "-c":
            countChars();
            break;
        case "-w":
            countWords();
            break;
        case "-l":
            countLines();
            break;
        default:
            cout << "Please specify correct argument.\n"
                << "-c for counting characters.\n"
                << "-w for counting words.\n"
                << "-l for counting lines.\n";
            break;
    }
break:
}
catch (...)
{
    return 1;
}

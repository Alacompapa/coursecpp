#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc == 1)
    {
        // Use the usage func here!
        cout << "Error; No arguments given.\n"; // No args given
        return 1;
    }
    
    if (!structCall(argc, argv))
        return 0;

    boundCall(argc, argv);
}
catch (...)
{
    return 1;
}

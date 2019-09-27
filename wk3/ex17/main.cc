#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 0;

    for (int counter = 0; counter < argc; ++counter)
    {
        string str = argv[counter];
        if (str.find("."))
        {
            double argcount = static_cast<double>(argc);
            double summed = sum(argcount, argv);
            cout << summed << '\n';
            return 0;
        }
    }

    int summed = sum(argc, argv);
    cout << summed << '\n';
}

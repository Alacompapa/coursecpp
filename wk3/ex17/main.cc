#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        bool dots = false;
        for (int counter = 0; counter < argc;++counter)
        {
            string str = argv[counter];
            if (str.find("."))
            {
                dots = true;
                break;
            }
        }
        if (dots == false) {
            int summed = sum(argc, argv);
            cout << summed << '\n';
        } else {
            double argcount = static_cast<double>(argc);
            double summed = sum(argcount, argv);
            cout << summed << '\n';
        }

    }
}

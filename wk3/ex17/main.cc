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
            int randomvalue = 0;
            int summed = sum(argc, argv, randomvalue);
            cout << summed << '\n';
        } else {
            double summed = sum(argc, argv);
            cout << summed << '\n';
        }

    }
}

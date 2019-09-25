#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        size_t dots = 0;
        for (int counter = 0; counter < argc;++counter)
        {
            string str = argv[counter];
            if (str.find("."))
            {
                ++dots;
            }
        }
        if (dots == 0) {
            int randomvalue = 0;
            int summed = sum(argc, argv, randomvalue);
            cout << summed << '\n';
        } else {
            double summed = sum(argc, argv);
            cout << summed << '\n';
        }

    }
}

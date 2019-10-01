#include "main.ih"

int main(int argc, char **argv)
{

    string test[] = { "def", "abc", "abb", "abd", "zq" };
    quickSort(test, 0, 4);

    for (size_t idx = 0; idx < size(test); ++idx)
        cout << "Uiteindelijke array " << test[idx] << '\n';

/*
    for (size_t idx = 1; environ[idx]; ++idx)
        cout << environ[idx] << '\n';

    char** env[] = { environ, nullptr };
    for (size_t idx = 1; env[idx]; ++idx)
        cout << env[idx] << '\n';
*/
}

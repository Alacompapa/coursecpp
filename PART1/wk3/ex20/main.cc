#include "main.ih"

int main(int argc, char **argv)
{

    string test[] = { "abceded", "hey", "butter", "xenophobic", "mantisse", "ape" };
    size_t length = sizeof(test)/sizeof(test[0]);
    cout << "Unordered" << '\n';
    for (size_t idx = 0; idx < size(test); ++idx)
        cout << test[idx] << ' ';
    cout << '\n';
    quickSort(test, 0, length);

    cout << "Ordered:" << '\n';
    for (size_t idx = 0; idx < size(test); ++idx)
        cout << test[idx] << ' ';
    cout << '\n';

/*
    for (size_t idx = 1; environ[idx]; ++idx)
        cout << environ[idx] << '\n';

    char** env[] = { environ, nullptr };
    for (size_t idx = 1; env[idx]; ++idx)
        cout << env[idx] << '\n';
*/
}

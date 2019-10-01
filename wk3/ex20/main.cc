#include "main.ih"

int main(int argc, char **argv)
{
    for (size_t idx = 1; environ[idx]; ++idx)
        cout << environ[idx] << '\n';

    char** env[] = { environ, nullptr };
    for (size_t idx = 1; env[idx]; ++idx)
        cout << env[idx] << '\n';
}

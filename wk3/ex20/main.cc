#include "main.ih"

int main(int argc, char **argv)
{
    size_t left = 0;
    size_t right = 0;
    quicksort(environ, left, right);
    for (size_t i = 0; environ[i]; ++i) {
        cout << environ[i] << '\n';
    }
}

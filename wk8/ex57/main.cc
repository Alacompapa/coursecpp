#include "main.ih"

int main(int argc, char **argv)
{
    Strings strings{ cin };

    for (size_t idx = 0, end = strings.size();

            idx != end; ++idx)

        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
}

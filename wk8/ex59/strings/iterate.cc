#include "strings.ih"

void Strings::iterate(char **environLike)
{
    for (size_t idx = 0; idx != d_nIterate; ++idx)
        for (char **env = environLike; *env != 0; ++env)
            add(*env);

    cout << d_str[0] << '\n' << d_str[d_size - 1] << '\n';
}

#include "main.ih"

int main(int argc, char **argv, char **envp)
try
{
    // test code for printing all environment variables
    for (char **env = envp; *env != 0; env++)
    {
        char *thisEnv = *env;
        cout << thisEnv << '\n';
    }
}
catch (...)
{
    return 1;
}

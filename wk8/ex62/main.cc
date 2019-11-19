#include "main.ih"

int main(int argc, char **argv)
{
    double *dp = new double[10];
    for (size_t idx = 0; idx != 10; ++idx)
    {
        dp[idx] = 4 + idx*2;
        cout << dp[idx];
    }

    Handler hand{ dp };

    cout << '\n' << *(hand.doubles()) << '\n';
}

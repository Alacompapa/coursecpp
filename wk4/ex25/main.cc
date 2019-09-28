#include "main.ih"

int main(int argc, char **argv)
{
    for (auto [year, amount, interest, idx] = argGen(argc, argv); 
            idx != year;
            ++idx, amount *= (1 + interest/100.0))
        cout << "At year " << idx << ": amount = " << amount << '\n';
}

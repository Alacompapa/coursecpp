#include <iostream>
#include <string>

using namespace std;

    void sum(char** argv, size_t i, int INTaddition)
    {
        INTaddition + stod(argv[i]);
    }
    void sum(char** argv, size_t i, double DOUaddition)
    {
        DOUaddition + stoi(argv[i]);

    }
int main(int argc, char** argv)
{
    double DOUaddition = 0;
    int INTaddition;
    for (size_t i = 1; i < argc; ++i)
    {
        string condition = argv[1];
        if(condition.find("."))
        {

            sum(argv, i, DOUaddition);
        }
        else{

            sum(argv, i, INTaddition);
        }
    }
    if (INTaddition > DOUaddition)
    {
        cout << INTaddition << "\n";
    }
    else
    {
        cout << DOUaddition << "\n";
    }
}

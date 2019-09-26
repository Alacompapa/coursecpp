#include <iostream>
#include <string>

using namespace std;

    int sum(char** argv, size_t i, int INTaddition, int int_result)
    {
        int_result = INTaddition + stoi(argv[i]);
        return int_result;
    }
    double sum(char** argv, size_t i, double DOUaddition, double d_result)
    {
        d_result = DOUaddition + stod(argv[i]);
        return d_result;
    }
int main(int argc, char** argv)
{
    double d_result = 0;
    int int_result = 0;
    for (size_t i = 1; i < argc; ++i)
    {
        string condition = argv[1];
        if(condition.find("."))
        {
            double DOUaddition = 0;
            sum(argv, i, DOUaddition, d_result);
        }
        else{
            int INTaddition = 0;
            sum(argv, i, INTaddition, int_result);
        }
    }
    if (int_result > d_result)
    {
        cout << int_result << "\n";
    }
    else
    {
        cout << d_result << "\n";
    }
}

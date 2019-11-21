#include <iostream>
#include <string>

using namespace std;

    int sum(char** argv, int argc, int i, int int_result)
    {
        for(i = 1; i< argc; ++i) {
            int_result += stoi(argv[i]);
        }
        cout << int_result << "\n";
        return 0;
    }
    double sum(char** argv, int argc, int i, double d_result)
    {
        for(i = 1; i< argc; ++i) {
            d_result += stod(argv[i]);
        }
        cout << d_result << "\n";
        return 0;

    }
int main(int argc, char** argv)
{
    double d_result = 0;
    int int_result = 0;
    int i = 1;
        string condition = argv[1];
        if(condition.find("."))
        {
            sum(argv, argc, i, d_result);
        }
        else{
            sum(argv, argc, i, int_result);
        }
}

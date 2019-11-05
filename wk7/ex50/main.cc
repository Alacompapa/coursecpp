#include <fstream>

using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    ofstream out1{ "/tmp/out1" };
    hello(out1);

    // fstream requires flags for writing and reading.
    // If we don't initialize fstream with ios::out flag, it won't be able to
    // write by means of insertion operator
    fstream out2{ "/tmp/out2", ios::out };
    hello(out2);
}

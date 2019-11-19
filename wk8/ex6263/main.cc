#include "main.ih"

int main(int argc, char **argv)
{
    //Wrap w1{ 0 };
    size_t init = 10;
    Wrap w1{ init };
    cout << "Value: " << w1.value() << '\n';

    Wrap w2{ "hello world" };
    cout << "Value: " << w2.word() << '\n';

    w1 = w2;

    cout << "Value: " << w1.word() << '\n';

    //istringstream istr{ "this is a string containing several words" };
    //Wrap w3{ istr };
    string stringstring{ "this is a string containing several words" };
    Wrap w3{ stringstring };

    //Strings const &str = w3.words();

    string const &str = w3.word();

    for (size_t idx = 0, end = str.size(); idx != end; ++idx)
        cout << str.at(idx) << ' ';
    cout << '\n';

    w1.swap(w3);

    cout << w3.word() << '\n';
}


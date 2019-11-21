#include "main.ih"
int main(int argc, char **argv)
{
    int (*order)(void const *first, void const *second);
    order = &nocasedec;
    Sort sortObj = Sort(order); // test code


    srand(420);  // set seed
    size_t strarrsize = 10;
                                                        // get raw memory
    string **strings = static_cast<string **>(operator new(strarrsize * sizeof(string*)));
    for (string **begin = strings, **end = strings + strarrsize;
            begin != end; ++begin, ++strings)
    { // fill string array WORKS
        char v = rand() % 94 + 32;
        *strings = new string();
        **strings += v;
        cout << **strings;
    }
    strings -= strarrsize;
    cout << '\n';

    cout << "\n";
    for (string **begin = strings, **end = strings + strarrsize;
            begin != end; ++begin, ++strings)
    {
        cout << "string " << **begin << " at " << *begin 
             << "     pointer to str at " << begin 
             << '\n';
    }
    strings -= strarrsize;
    sortObj.sort(strings, strarrsize);

    cout << "\n";
    for (string **begin = strings, **end = strings + strarrsize;
            begin != end; ++begin, ++strings)
    {
        cout << "string " << **begin << " at " << *begin 
             << "     pointer to str at " << begin 
             << '\n';
    }
    strings -= strarrsize;
    
    for (string **begin = strings, **end = strings + strarrsize;
            begin != end; ++begin, ++strings)
        cout << **begin;
}

#include "charcount.ih"

size_t CharCount::count(std::istream& stream)
{
    size_t counter = 0;
    unsigned char ch;
    while(stream >> ch)
    {
        ++counter;

        auto [ action, index ] = locate(ch);
        cout << "COUNT " << d_CharInfo.ptr[index].count << '\n';

        switch (action)
        { // inserting and appending is kinda the same thing so we can probably use fallthrough
            case INC:
                // increment ptr[index].count
                ++d_CharInfo.ptr[index].count;
                cout << "INC" << '\n';
                break;
            case APPEND:
                // append ch at end of `Char ptr[]`
                cout << "APPEND" << '\n';
            case INSERT:
                // insert another Char entry in ptr array
                cout << "INSERT" << '\n';
                d_CharInfo.ptr = insert(d_CharInfo.ptr, d_CharInfo.nCharObj, ch, index);
                ++d_CharInfo.nCharObj;
                ++d_CharInfo.ptr[index].count;
                cout << d_CharInfo.nCharObj << '\n' <<
                    d_CharInfo.ptr[index].ch << '\n';
                break;

        }
    }

    return counter;
}

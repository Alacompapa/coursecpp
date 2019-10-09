#include "charcount.ih"

Char* CharCount::insert(Char *old, size_t oldsize,
                        unsigned char ch, size_t index)
{
    size_t newsize = oldsize + 1;
    Char *tmp = new Char[newsize];
    Char charObj = { ch, 1 };
    cout << index << " INDEX" << '\n';
    cout << charObj.ch << ' ' << charObj.count << " times \n";
    for (size_t idx = 0; idx < newsize; ++idx)
        //tmp[idx] = (idx == index) ? charObj : old[idx];
    {
        if (idx == index)
        {
            tmp[idx] = charObj;
        }
        else
            tmp[idx] = old[idx];
    }

    delete[] old;
    return tmp;
}

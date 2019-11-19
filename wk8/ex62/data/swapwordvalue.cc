#include "data.ih"

void Data::swapWordValue(Data &other)
{

    string word = u_word;          // save current
    destroy(WORD);                    // destroy current
                            
    u_value = other.u_value;            // install at this
    other.destroy(VALUE);               // destroy at other
                            
    new(&other.u_word) string{ std::move(word) };                // install at other
}

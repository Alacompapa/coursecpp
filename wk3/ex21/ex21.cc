1.// It is appropriate to use an int-value parameter when you want to add an extra int to an existing one.
//In the code example this is illustrated because the int a parameter gets it value increased by one.
int addOne(int parameter)
{
    return parameter + 1;
}
main()
{
    int a = 4;
    int b = addOne(a);
    cout << b;
}

2.// It is appropriate to use a string value parameter when you want to add an extra character array to an existing string.
//In the code example this is illustrated because the string parameter gets another string appended and both of them are returned.
string addfriend(string parameter)
{
    return parameter + "friends";
}
main(int argc, char** argv)
{
    string one = "Hello my";
    string final = Addfriend(one);
    cout <<  final;
}

3.// It is appropriate to use a const reference to an int-type parameter when you want to use the value of the
//int-type  but don't want to change its definition. In the code example this is illustrated because prefix "++" will not change the int parameter.
static int x = 7;
int addvalue(const int &parameter)
{
    ++parameter;
    return parameter + 3;
}
int main(int argc, char** argv)
{
    addvalue(x);
}

4.// It is appropriate to use a const reference to a string value parameter when you want to do something with a
//a string but dont want to store it or change it.  In the code example this is illustrated because the string
//parameter is appended to another string but its value doesnt change and no copy is stored
string addstrings(const string &parameter)
{
    return "Hey, you haven't said " + parameter;
}
int main(int argc, char** argv)
{
    string hello = "hello";
    addstrings(hello);
}

5.// It is appropriate to use a non-const reference to an int-type parameter when you might want to change the int
//but don't want to save a copy of it.  In the code example this is illustrated because the parameter is modified
//in the function dog_years but the change is not saved, only returned.
int dog_years(int &parameter)
{
    return parameter * 7;
}
int main(int argc, char** argv)
{
    int age = 57;
    cout <<  age << "in dog years is" << dog_years(age);
}

6.// It is appropriate to use a non-const reference  to a string value parameter if you want to change the string
//but dont want to save a copy of it.  In the code example this is illustrated because another string is appended
//to menu and that output is returned but the string menu will remain unchanged.
string Add_desert(string &parameter)
{
    return parameter + "chocolate ice cream";
}
int main(int argc, char** argv)
{
    string menu = "Soup, meatballs and";
    Add_desert(menu);
}
7.// It is appropriate to use a const rvalue-reference to an int-type parameter if the output of a function wants to be stored.
// In the code example this is illustrated because the output of function Addition is stored in an rvalue-reference so it can
// be later deployed in cout.
int Addition(const int &parameter1,const int &parameter2)
{
    return parameter1 + parameter2;
}
int main(int argc, char** argv)
{
    &&add_result = Addition (3 , 4)
    cout << add_result;
}

8.// It is appropriate to use a const rvalue-reference to a string parameter if the output of a function wants to be stored.
// In the code example this is illustrated because the output of function full_sentence is fed as input to function
// final_sentence through an rvalue-reference.
string full_sentence(const string &parameter1, const string &parameter2)
{
    return parameter1 + parameter2;
}
string final_sentence(const string &parameter1, const string &parameter2)
{
    return parameter1 + parameter2;
}
int main(int argc, char** argv)
{
    &&sentence = full_sentence("I am" ,"tired");
    &&output = final_sentence(sentence, "today");
    cout << output;
}



9.// It is appropriate to use an rvalue-reference to an int parameter



10.// It is appropriate to use an rvalue-reference to a string parameter



11.// It is appropriate to use a return int-type value to be able to modify the output of a given function.  In the code example this
// is illustrated because the output of multiplication is changed in the cout statement.
int multiplication(int parameter1, int parameter2)
{
    return parameter1 * parameter2;
}
int main(int argc, char **argv)
{
    cout << multiplication(3, 4) + 10;
}

12.// It is appropriate to use a return string value to be able to modify the output of a given function.  In the code example this is
//illustrated because
string sentence(string parameter1, string parameter2)
{
    return parameter1 * parameter2;
}
int main(int argc, char **argv)
{
    cout << sentence("hello", "friend") + "Bye";
}

13.// It is appropriate to use a return const reference to an int if the output of the function should not be altered.
// In the code example this is illustrated because the return value of multiplication is included in cout unmodified.
int multiplication(int parameter1, int parameter2)
{
    const int result = parameter1 * parameter2;
    return &result;
}
int main(int argc, char **argv)
{
    ++multiplication(3, 4);
}

14.// It is appropriate to use a return const reference to an string if the output of the function should not be altered.
// In the code example this is illustrated because the output of function sentences is appended to first_word but the value
// of output is still the same.
string sentence(string parameter1, string parameter2)
{
    string const output = parameter1 + parameter2;
    return &output;
}
int main(int argc, char **argv)
{
    string first_word = "hello";
    first_word + sentence("my", "friend");
}

15.// It is appropriate to use a return  non const reference to an int if the output wants to be modified but the original value of the
// parameters will remain unchanged. In the code example this is illustrated because the original value of parameter1 remains the same.
int multiplication(int parameter1, int parameter2)
{
    return &parameter1 * &parameter2;
}
int main(int argc, char **argv)
{
    cout << multiplication(3, 4) + 8;
}

16.// It is appropriate to use a return non const reference to a string if the output wants to be modified but the original value of the
// parameters will remain unchanged. In the code example this is illustrated because &output is modified in main but the original content of output is the same.
string sentence(string parameter1, string parameter2)
{
    string output = parameter1 + parameter2;
    return &output;
}
int main(int argc, char **argv)
{
    string answer = sentence("hello", "friend");
    cout << answer + ", I modified this sentence.";
}

17.// It is appropriate to use a return a const rvalue-reference to an int



18.// It is appropriate to use a return a const rvalue-reference to a string



19.// It is appropriate to use a return an rvalue-reference to an int



20.// It is appropriate to use a return an rvalue-reference to an  string

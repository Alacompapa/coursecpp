#include "main.ih"
#include <string>
// It is appropriate to use a string value parameter when you want to add an extra character array to an exisitng string 
main(int argc, char** argv){
	string one = "Hello my"
	string final = Addfriend(string one)
	cout <<  final;
}

string addfriend(string parameter){
	return parameter + "friends";
}
// In the code example this is illustrated because

}

// It is appropriate to use a const reference to an int-type parameter when you want to use the value of the 
//int-type  but don't want to change its definition
static int x = 7;

int main(int argc, char** argv)
{
	 addvalue(x);
} 

int addvalue(const int &parameter)
{
	++parameter;
	return parameter + 3;
}

// It is appropriate to use a const reference to a string value parameter when you want to do something with a 
//a string but dont want to store it or change it

string hello = "hello";
int main(int argc, char** argv)
{
	 addstrings(hello)
}

string addstrings(const string &parameter)
{
	return "Hey, you haven't said " + parameter; 
}

// It is appropriate to use a non-const reference to an int-type parameter when you might want to change the int
//but don't want to save a copy of it.

int main(int argc, char** argv)
{
	int age = 57;
	cout <<  age << "in dog years is" << dog_years(age);
}

int dog_years(int &parameter)
{
	return parameter * 7;
}

// It is appropriate to use a non-const reference  to a string value parameter if you want to change the string
//but dont want to save a copy of it.

int main(int argc, char** argv)
{
	string menu = "Soup, meatballs and";
	Add_desert(menu);
}
 
string Add_desert(string &parameter)
{
	return parameter + "chocolate ice cream"
}

// It is appropriate to use a const rvalue-reference to an int-type parameter 
int Addition(const int &parameter1,const int &parameter2)
{
	return parameter1 + parameter2;
}
int main(int argc, char** argv)
{
	&&add_result = Addition (3 , 4)
	cout << add_result;
}
// It is appropriate to use a const rvalue-reference to a string parameter
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
        &&sentence = full_sentence("I am" ,"tired")
	&&output = final_sentence(sentence, "today")
        cout << output;
}

// It is appropriate to use an rvalue-reference to an int parameter

// It is appropriate to use an rvalue-reference to a string parameter

// It is appropriate to use a return int-type value

// It is appropriate to use a return string value

// It is appropriate to use a return const reference to an int

// It is appropriate to use a return const reference to an string

// It is appropriate to use a return  non const reference to an int

// It is appropriate to use a return  non const reference to a string

// It is appropriate to use a return a const rvalue-reference to an int

// It is appropriate to use a return a const rvalue-reference to a string

// It is appropriate to use a return an rvalue-reference to an int

// It is appropriate to use a return an rvalue-reference to an  string








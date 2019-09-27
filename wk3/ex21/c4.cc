string addstrings(const string &parameter)
{
    return "Hey, you haven't said " + parameter; 
}

int main(int argc, char** argv)
{
    string hello = "hello";
	addstrings(hello);
}
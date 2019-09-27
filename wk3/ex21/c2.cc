string addfriend(string parameter)
{
	return parameter + "friends";
}

main(int argc, char** argv)
{
    string one = "Hello my";
    string final = Addfriend(one);
	cout << final;
}
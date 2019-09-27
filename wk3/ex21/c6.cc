string Add_desert(string &parameter)
{
    return parameter + "chocolate ice cream";
}

int main(int argc, char** argv)
{
	string menu = "Soup, meatballs and";
	Add_desert(menu);
}
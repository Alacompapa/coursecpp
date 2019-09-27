int addvalue(const int &parameter)
{
	++parameter;
	return parameter + 3;
}

int main(int argc, char** argv)
{
    static int x = 7;
	addvalue(x);
} 


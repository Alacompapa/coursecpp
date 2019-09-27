int dog_years(int &parameter)
{
	return parameter * 7;
}

int main(int argc, char** argv)
{
	int age = 57;
	cout <<  age << " in dog years is " << dog_years(age);
}
string sentence(string parameter1, string parameter2)
{
    return parameter1 * parameter2;
}

int main(int argc, char **argv)
{
    cout << sentence("hello", "friend") + "Bye";
}
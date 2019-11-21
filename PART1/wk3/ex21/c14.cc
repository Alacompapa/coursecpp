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

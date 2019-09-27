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

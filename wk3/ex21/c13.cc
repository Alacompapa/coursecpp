int multiplication(int parameter1, int parameter2)
{
    const int result = parameter1 * parameter2;
    return &result;
}

int main(int argc, char **argv)
{
    ++multiplication(3, 4);
}

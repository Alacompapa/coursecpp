#include "main.ih"

int main(int argc, char **argv)
{
    size_t nrPersons = 5;
    Person array[nrPersons];

    readPersonInfo(array, nrPersons);
    writePersonInfo(array, nrPersons);
}

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(int argc, char** argv ) {
    string sentence = "This program is working as usual. \nEverything is great around here. \nGood bye.";
    string input = "ok";
    if (argv[1] == input) {
            cout << sentence << endl;
    } else {
        while (true)
            cerr << sentence.size() << "\n";
    }
}


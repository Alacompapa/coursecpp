#include <iostream>
#include <string>
#include <istream>
using namespace std;    //Use the std namespace

int main()
{
    string line;
    string space = " ";
    getline(cin, line);  //insert istream into line object
    size_t blank1 = line.find(space);
    size_t blankl = line.find_last_of(space);
    size_t total = line.length();
    int Last = total - 1;
    int beginwordl = blankl + 1;
    int endword1 = blankl - 4;
    string first;
    first.append(line, 0 , blank1 );    //attach the first word of line into first
    string last;
    last.append(line, beginwordl, Last);     //attach the last word of line into last
    string middle;
    middle.append(line, blank1, endword1);   //attach the rest of the string into middle
    cout << last << middle << first << "\n";
}

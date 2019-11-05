#include "main.ih"

int main(int argc, char **argv)
{
    // input and output files via argv    
    // option -b for humanToBin
    ifstream infile{ "./dnahuman" }; 
    ofstream outfile{ "./tnabin" };
    humanToBin(infile, outfile);

    ifstream ifs{ "./tnabin" };
    ofstream ofs{ "./tnahuman" };
    binToHuman(ifs, ofs);

}

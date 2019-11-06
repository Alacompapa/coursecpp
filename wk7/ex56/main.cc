#include "main.ih"

int main(int argc, char **argv)
{
    // TODO: input and output files via argv    
    // option -b for humanToBin
    ifstream infile{ "./dnahuman" }; 
    ofstream outfile{ "./tnabin" };
    humanToBin(infile, outfile);

    outfile.close();
    infile.close();

    ifstream ifs{ "./tnabin" };
    ofstream ofs{ "./tnahuman" };
    binToHuman(ifs, ofs);

}
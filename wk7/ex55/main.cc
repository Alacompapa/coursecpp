//TODO: explanation for question in exercise
#include <fstream>
#include <iostream>
#include <csignal>
#include <sys/acct.h>

#include <iomanip>

using namespace std;

//typedef __u16 __bitwise __le16;
//typedef __u16 __bitwise __be16;
//typedef __u32 __bitwise __le32;
//typedef u_int16_t comp_t;
//
//struct acct_v3
//{
//    char            ac_flag;                /* Flags */
//    char            ac_version;             /* Always set to ACCT_VERSION */
//    __u16           ac_tty;                 /* Control Terminal */
//    __u32           ac_exitcode;      /* Exitcode */
//    __u32           ac_uid;                 /* Real User ID */
//    __u32           ac_gid;                 /* Real Group ID */
//    __u32           ac_pid;                 /* Process ID */
//    __u32           ac_ppid;                /* Parent Process ID */
//    __u32           ac_btime;               /* Process Creation Time */
//    float           ac_etime;               /* Elapsed Time */
//    comp_t          ac_utime;               /* User Time */
//    comp_t          ac_stime;               /* System Time */
//    comp_t          ac_mem;                 /* Average Memory Usage */
//    comp_t          ac_io;                  /* Chars Transferred */
//    comp_t          ac_rw;                  /* Blocks Read or Written */
//    comp_t          ac_minflt;              /* Minor Pagefaults */
//    comp_t          ac_majflt;              /* Major Pagefaults */
//    comp_t          ac_swaps;               /* Number of Swaps */
//    char            ac_comm[16];      /* Command Name */
//};
//   



int main(int argc, char **argv)
{
    // TODO: parse arguments so we can specify our own file (OPTION -s)
    //  and OPTION -a for all provesses output

    ifstream pacct{ "./pacct.bin" };

    // TODO: output all names of processes that didnt exit properly
    //  special case for SIGKILL and SIGTERM


    size_t posSignal = 4;
    size_t sizeSignal = 4;
    size_t posName = 64 - 16;
    size_t sizeName = 16;

    char bufferacct[64];
    while (pacct.read(bufferacct, 64) and !pacct.eof())
    {
        for (char *begin = bufferacct + posName, *end = begin + sizeName; begin != end; ++begin)
            cout << *begin; 
        cout << ' ';

        for (char *begin = bufferacct + posSignal, *end = begin + sizeSignal; begin != end; ++begin)
           cout << setbase(16) << (int)*begin; 

        cout << '\n';
    }

    // TODO: output all names of all processes exited
    
}

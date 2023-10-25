#include<iostream>
#include<unistd.h>
#include<cstdlib>

using std::cout;
using std::cerr;
using std::endl;

void static usage(const char *arg0)
{
    cout<<"Usage: "
        << arg0
        << " [-t nsec]"
        << " [-n]"
        << " name"
        << endl;
        exit(1);
}

int main(int argc, char *argv[])
{
    cout<<endl<<"------------------------------------------"<<endl;
    int flags;
    int opt;
    int nsec;
    int tfnd;

    nsec = 0;
    tfnd = 0;
    flags = 0;

    while( ( opt = getopt( argc, argv, "n:t:")) != -1 )
    {
        switch(opt)
        {
            case 'n':
                flags = 1;
                break;
            case 't':
                nsec = atoi(optarg);
                tfnd = 1;
                break;
            default:
                usage(argv[0]);
        }
    }

    printf("flags = %d; tfnd = %d; nsecs = %d; optind = %d\n", flags, tfnd, nsec, optind);

    if (optind >= argc) {
        cout<< "ERROR: missing name arguments"<<endl;
        usage(argv[0]);
    }

    cout<< "name argument = "<< argv[optind]<< endl;

    return 0;
}
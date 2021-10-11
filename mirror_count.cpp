#include "middle.h"

using namespace std;

int itc_mirror_count(long long num)
{
    long long i = 1;
    int r = 0;
    while(i < num)
    {
        if(itc_mirror_num(i) == 1)
        {
            r ++;
        }
        i ++;
    }
    return r;
}

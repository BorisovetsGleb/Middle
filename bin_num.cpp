#include "middle.h"

long long itc_bin_num(long long num)
{
    if(num >= 524288)
        return -1;
    if(num < 0)
        return -1;
    return itc_covert_num(num, 2);
}

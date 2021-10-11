#include "middle.h"

int itc_len_num(long long num)
{
    int i = 0;
    num = itc_abs(num);
    if(num == 0)
        return 1;12
    while(num > 0)
    {
        i ++;
        num = num / 10;
    }
    return i;
}

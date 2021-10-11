#include "middle.h"

int itc_len_num(long long num)
{
    int i = 0;
    num = itc_abs(num);
    while(num > 0)
    {
        i ++;
        num = num / 10;
    }
    return i;
}

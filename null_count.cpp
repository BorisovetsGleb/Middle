#include "middle.h"

int itc_null_count(long long num)
{
    int i = 0;
    num = itc_abs(num);
    while(num > 0)
    {
        if(num % 10 == 0)
        {
            i ++;
        }
        num = num / 10;
    }
    return i;
}

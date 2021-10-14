#include "middle.h"

int itc_min_num(long long num)
{
    int min = 10;
    if(num == 0)
        return 0;
    num = itc_abs(num);
    while(num > 0)
    {
        if(num % 10 < min)
        {
            min = num % 10;
        }
        num = num / 10;
    }
    return min;
}

#include "middle.h"

int itc_max_num(long long num)
{
    int max = 0;
    num = itc_abs(num);
    while(num > 0)
    {
        if(num % 10 > max)
        {
            max = num % 10;
        }
        num = num / 10;
    }
    return max;
}

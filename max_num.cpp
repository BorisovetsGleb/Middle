#include "middle.h"

int itc_max_num(long long num)
{
    int max1 = 0;
    num = itc_abs(num);
    while(num > 0)
    {
        if(num % 10 > max1)
        {
            max1 = num % 10;
        }
        num = num / 10;
    }
    return max1;
}

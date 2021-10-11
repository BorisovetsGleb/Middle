#include "middle.h"

int itc_sum_num(long long num)
{
    int sum = 0;
    num = itc_abs(num);
    while(num > 0)
    {
        sum  = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}

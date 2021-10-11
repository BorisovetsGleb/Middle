#include "middle.h"

long long itc_multi_num(long long num)
{
    int mn = 1;
    num = itc_abs(num);
    while(num > 0)
    {
        mn  = mn * (num % 10);
        num = num / 10;
    }
    return mn;
}

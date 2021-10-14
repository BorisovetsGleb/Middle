#include "middle.h"

long long itc_rev_covert_num(long long num, int i)
{
    long long len = itc_len_num(num);
    if(num < 0)
        return -1;
    if(itc_max_num(num) >= i)
        return -1;

    else
    {
        long long l = 0;
        long long dec = 0;
        long long num2 = num;
        while (l < len)
        {
            dec = dec + ((num % 10) * itc_pow(i, l));
            l ++;
            num = num / 10;
        }
        return dec;
    }
}

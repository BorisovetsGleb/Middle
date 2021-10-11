#include "middle.h"

long long itc_rev_covert_num(long long num, int i)
{
    long long len = itc_len_num(num);
    long long l = 0;
    long long dec = 0;
    while (l < len)
    {
        dec = dec + ((num % 10) * itc_pow(i, l));
        l ++;
        num = num / 10;
    }
    return dec;
}

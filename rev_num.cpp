#include "middle.h"

int itc_rev_num(long long num)
{
    int i = 0;
    num = itc_abs(num);
    num = my_rev(num);
    i = itc_len_num(num);
    return i;
}

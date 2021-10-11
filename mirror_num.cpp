#include "middle.h"

bool itc_mirror_num(long long num)
{
    long long num2;
    num = itc_abs(num);
    num2 = my_rev(num);
    if(num2 == num)
    {
        return 1;
    }
    return 0;
}

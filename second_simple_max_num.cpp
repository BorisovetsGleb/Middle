#include "middle.h"

int itc_second_simple_max_num(long long num)
{
    num = itc_abs(num);
    if(num < 10)
        return -1;
    int max1 = 0;
    int max2 = 0;
    max1 = itc_max_num(num);
    long long num2;
    num2 = num;
    long long num3 = 1;
    bool isMax = 0;
    while (num2 > 0)
    {
        if(num2 % 10 == max1 && isMax == 0)
        {
            isMax = 1;
            num3 = num3 * 10;
        }
        else
            num3 = num3 * 10 + (num2 % 10);
        num2 = num2 / 10;
    }
    max2 = itc_max_num(num3);
    if(max1 == max2)
        return -1;
    return max2;
}

#include "middle.h"

long long itc_pow(long long num, int step)
{
    int i = 1;
    int num2 = num;
    if(step == 0)
    {
        return 1;
    }
    while (i < step)
    {
        num2 = num2 * num;
        i ++;
    }
    if(step > 0)
    {
        return num2;
    }

    long long num1 = num2;
    if(step < 0)
    {
        return 1 / num1;
    }
}

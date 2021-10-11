#include "middle.h"

long long itc_covert_num(long long num, int i)
{
    long long num2 = num;
    long long bin1 = 0;
    long long bin2 = 0;
    bool isFirstOne = 0;
    long long colOfNols = 0;
    while (num2 > 0)
    {
        if(num2 % i == 0 && isFirstOne == 0)
        {
            colOfNols ++;
        }
        if(num % i == 1)
        {
            isFirstOne = 1;
        }
        bin1 = bin1 * 10 + (num2 % i);
        num2 = num2 / i;
    }
    if(colOfNols > 0)
        bin2 = my_rev(bin1) * my_ten_in_step(colOfNols);
    else
        bin2 = my_rev(bin1);
    return bin2;
}

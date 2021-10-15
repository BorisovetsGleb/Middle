#include "middle.h"

int itc_second_max_num(long long num)
{
    num = itc_abs(num);
    /*max1 = itc_max_num(num);
    long long num2;
    num2 = num;
    long long num3 = 1;
    bool isMax = 0;
    int len = itc_len_num(num);*/
    //std::cout <<len <<" ";
    //std::cout <<"num % itc_pow(10, len - 1) = " <<num % itc_pow(10, len - 1) <<" (num % itc_pow(10, len - 1)) / 10 = " <<(num % itc_pow(10, len - 1)) / 10 <<" ";
    /*if((num % itc_pow(10, len - 1)) / 10 == 0)
        return 0;*/
    //std::cout <<itc_sum_num(num % itc_pow(10, len - 1)) <<" ";
    /*if(itc_sum_num(num % itc_pow(10, len - 1)) == 0)
        return 0;
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
    max2 = itc_max_num(num3);*/
    if(num < 10)
        return -1;
    int max1 = 0;
    int max2 = 0;
    while(num > 0)
    {
        if(num % 10 > max1)
        {
            max2 = max1;
            max1 = num % 10;
        }
        else
        {
            if(max2 < max1 && num % 10 > max2)
                max2 = num % 10;
        }
        num = num / 10;
    }
    return max2;
}

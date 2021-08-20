#include<stdio.h>

int main()
{
        double total_sum = 0;
        for(int i = 1; i <= 20; i++)
        {
                double single_sum = 1;
                for (int j = i; j > 0; j--)
                {
                        single_sum *= j;
                }
                total_sum += single_sum;
        }
        printf("1~20每个数字阶乘总和为：%lf\n",total_sum);
        return 0;
}

#include <stdio.h>

int main()
{
        double total_sum = 0, sum1 = 0, sum2 = 0, sum3 = 0.0;
        for (int k = 1; k <= 100; k++)
        {
                sum1 += k;
                if (k <= 50)
                {
                        sum2 += k * k;
                }
                //遍历10次就不在执行情况3
                if (k <= 10)
                {
                        sum3 += 1.0 / k;
                }
        }
        total_sum = sum1 + sum2 + sum3;
        printf("三种情况求和结果为：%lf\n", total_sum);
        return 0;
}

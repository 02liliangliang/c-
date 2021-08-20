#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double a, prev_sum = 0.0, total_sum = 0.0;
    printf("请输入a的值以及n的值: ");
    scanf("%lf %d", &a, &n);
    for (int i = 0; i < n; i++)
    {
        prev_sum += a * pow(10, i);
        total_sum += prev_sum;
    }
    printf("总和为：%lf\n", total_sum);
    return 0;
}

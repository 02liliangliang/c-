#include <stdio.h>
int main()
{
    int a = 3, b = 4, c = 5;
    printf("%d\n", !(a + b) + c - 1);
    printf("%d\n", !(a + b) + c - 1 && b + c / 2);
    return 0;
}

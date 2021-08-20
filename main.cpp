#include<stdio.h>
int main()
{
    long num;
    printf("输入一个不多于5位的整数:\n");
    scanf("%ld",&num);
    int place;
    if(num>9999) place=5;
    else if(num>999) place=4;
    else if(num>99) place=3;
    else if(num>9) place=2;
    else place=1;
    printf("\n%d是%d位数\n",num,place);

    int wan,qian,bai,shi,ge;
    ge=num%10;
    shi=num/10%10;
    bai=num/100%10;
    qian=num/1000%10;
    wan=num/10000;
    printf("\n分别打印出每一位数字和逆序输出:\n");
    switch(place)
    {
        case 5:printf("%d\t%d%d%d%d%d\n",num,ge,shi,bai,qian,wan);break;
        case 4:printf("%d\t%d%d%d%d\n",num,ge,shi,bai,qian);break;
        case 3:printf("%d\t%d%d%d\n",num,ge,shi,bai);break;
        case 2:printf("%d\t%d%d\n",num,ge,shi);break;
        case 1:printf("%d\t%d\n",num,ge);break;
    }
}


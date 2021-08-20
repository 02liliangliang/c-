#include<stdio.h>
int main()
{
    int score;
    printf("输入学生的成绩:\n");
    scanf("%d",&score);
 if (score<0 || score>100){
    printf("输入的数据非法!\n");
}else{
    if(score>90){
        printf("该同学的等级为:A");
    }
    if(score>=80 && score<=90){
        printf("该同学的等级为:B");
    }
    if(score>=70 && score<=79){
        printf("该同学的等级为:C");
    }
    if(score>=60 && score<=69){
        printf("该同学的等级为:D");
    }
    if(score>=0&&score<=59){
        printf("该同学的等级为:E");
    }
    }
    return 0;
}

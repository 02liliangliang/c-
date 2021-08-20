#include <stdio.h>

int main()
{
    char c;
    int eng_char = 0, space_char = 0, digit_char = 0, other_char = 0;
    printf("请输入一行字符：");
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            eng_char++;
        }
        else if (c == ' ')
        {
            space_char++;
        }
        else if (c >= '0' && c <= '9')
        {
            digit_char++;
        }
        else
        {
            other_char++;
        }
    }

    printf("英文字母数量:%d\n空格数量:%d\n数字数量:%d\n其他字符数量:%d\n", eng_char, space_char, digit_char, other_char);
    return 0;
}

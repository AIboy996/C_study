#include <stdio.h>

int main()//判断一个数是几位数
{
    int x=0;
    int n=0;

    printf("输入一个整数x：");
    scanf("%d", &x);

    if (x < 0) x *= -1;  //负数

    do{
        n ++;
        x /= 10;
    }while (x>0); //注意这里需要分号！
    //判断语句后置，先做循环体再判断循环条件

    printf("x是%d位数", n);

    return 0;
}
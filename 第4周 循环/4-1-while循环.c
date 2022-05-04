#include <stdio.h>

int main()//判断一个数是几位数
{
    int x=0;
    int n=0;

    printf("输入一个整数x：");
    scanf("%d", &x);

    if (x < 0) x *= -1;  //负数
    
    //必须要先做一次循环体，否则x==0的时候会出错！
    //如何改进？？使用do while语句
    //do while和while的区别是，前者先做循环体后判断，后者先判断后做循环体
    n ++;
    x /= 10;
    while (x>0){
        //这里的条件也不能是x>=0否则会陷入死循环
        n ++;
        x /= 10;
    }
    printf("x是%d位数", n);

    return 0;
}
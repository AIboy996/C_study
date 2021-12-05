#include <stdio.h>

int main()//比较大小
{
    int a=1, b=2;

    printf("输入两个数字：");
    scanf("%d %d", &a, &b);

    //带着else子句的if语句
    if (a>b){
        printf("%d > %d\n", a, b);
    }else{
        printf("%d <= %d\n", a, b);
    }
    //也可以这样写，带着大括号！！，注意if后面没有分号;
    //没有分号的形式只能带着一句话的表达式！！
    if (a>b)
        printf("%d > %d\n", a, b);
    else
        printf("%d <= %d\n", a, b);
        printf("balalala");//这句话无论如何都会执行
        //这个时候缩进不能代表结构，注意和python区别！！
}
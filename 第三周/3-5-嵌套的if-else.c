#include <stdio.h>

int main()//求最大值
{
    int a,b,c,max;

    printf("输入三个数，比较大小：");
    scanf("%d %d %d", &a, &b, &c);

    //最好不要落下大括号
    if (a>b){
        if (a>c){
            max = a;
        }else{
            max = c;
        }
    }else{
        if (b>c){
            max = b;
        }else{
            max = c;
        }
    }
    printf("max{%d,%d,%d} = %d\n", a, b, c, max);
    //形式上类似python的版本（但是实际上逻辑完全不同），但是这种写法并不推荐
    //与python很大的不同！！！C语言的缩进没有意义
    if (a>b)
        if (a>c)
            max = a;
        else//这里的缩进是无意义的，else子句总是和最接近的if匹配
            max = c;
    else
        if (b>c)
            max = b;
        else
            max = c;
    
    printf("max{%d,%d,%d} = %d\n", a, b, c, max);

    //实际上全部的缩进都是无所谓的
    if (a>b)
    if (a>c)
    max = a;
    else//这里的缩进是无所谓的，else子句总是和最接近的if匹配
    max = c;
    else
    if (b>c)
    max = b;
    else
    max = c;
    printf("max{%d,%d,%d} = %d\n", a, b, c, max);

    return 0;
}
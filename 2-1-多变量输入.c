#include <stdio.h>

//如何一次输入多个变量
//又如何一次输出多个变量！

int main()//计算两个数的加和
{
    int a,b;
    //可以空格分隔，也可以回车换行！
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    
    return 0;
}
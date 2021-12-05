#include <stdio.h>

int main()//如何交换a，b的值
{
    int a=1,b=2;
    int t;

    printf("a:%d b:%d\n", a, b);
    //中间变量
    t = a;
    a = b;
    b = t;
    printf("a:%d b:%d\n", a, b);
    return 0;
}
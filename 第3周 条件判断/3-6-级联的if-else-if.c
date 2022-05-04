#include <stdio.h>

int main()//计算cos(x*pi/2)
{
    int x,cos;
    printf("输入一个数字：");
    scanf("%d", &x);
    //相当于python的elif！！
    //三种并列的情况
    if (x%4==0){
        cos = 1;
    }else if (x%4==2){
        cos = -1;
    }else{
        cos = 0;
    }
    printf("cos(%d*pi/2) = %d\n", x, cos);
    //当然也可以多次嵌套else if
    //四种并列的情况
    if (x%4==0)
    //大括号的写法是个人代码风格
    {
        cos = 1;
    }
    else if (x%4==1) //把else if和}分开写，可以快速注释掉这一块的else if子句
    {
        cos = 0;
    }else if (x%4==2)
    {
        cos = -1;
    }else
    {
        cos = 0;
    }
    printf("cos(%d*pi/2) = %d\n", x, cos);
    //函数没有返回值也是可以的
}
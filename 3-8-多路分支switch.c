#include <stdio.h>

int main()
{
    int type;

    printf("输入type(1-5):");
    scanf("%d", &type);
    
    switch (type)//switch的语句必须是一个int
    {
    case 1:
    //和if else的区别在于，不会一个一个遍历每一种case，而会直接跳到对应的地方
        printf("早上\n");
        break;//break是case之间区分的关键，代表结束switch语句
    case 2://case不是switch之间的划分，而是一个入口
        printf("中午\n");
        break;
    case 3:
        printf("下午\n");
        break;
    case 4:
        printf("这是4的晚上\n");
    case 5:
        //4和5都会执行下面的代码，因为4没有break
        printf("晚安\n");
        break;
    default:
        break;
    }
}
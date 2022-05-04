#include <stdio.h>

//表达式由运算符和算子组成
//算子可能是常数、变量或者方法的返回值
//诸如 + - * / = % () 都是运算符

int main()//计算时间差
{
    int hour1, minute1;
    int hour2, minute2;

    printf("输入第一个时间(hour minute)：");
    scanf("%d %d", &hour1, &minute1);
    printf("输入第二个时间(hour minute)：");
    scanf("%d %d", &hour2, &minute2);

    //转化为分运算更加方便
    int t1 = hour1*60 + minute1;
    int t2 = hour2*60 + minute2;

    int deltat = t2 - t1;

    //除数和余数！
    printf("时间差为%d小时%d分钟", deltat/60, deltat%60);

    return 0;
}
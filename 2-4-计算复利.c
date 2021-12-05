#include <stdio.h>

int main()//计算利率为3.3%的复利
{
    int x;

    printf("输入本金：");
    scanf("%d", &x);//注意不要忘记&指针！！！！
    double amount = x*1.033*1.033;
    printf("%lf", amount);

    return 0;
}
#include <stdio.h>

int main()//计算平均值
{
    int a,b;
    // 嵌入式赋值，可以理解但是不要这样赋值！！！
    int d = (a=1)+(b=2);

    printf("%d %d %d\n",a, b, d);

    printf("输入两个整数：");
    scanf("%d %d", &a, &b);

    double c = (a+b)/2.0;
    //运算符优先级
    // 1 + 单目不变      自右向左结合——左结合，算子在右边，运算符在左边
    // 1 - 单目取负      左结合
    // 2 * 双目运算      右结合
    // 2 /              右结合
    // 2 %              右结合
    // 3 + 加           右结合
    // 3 - 减           右结合
    // 4 = 赋值         左结合
    //和其他语言有所区别，c语言的复制语句是有结果的a=6的结果是6
    //而python的复制语句是没有结果的
    //a=b=6实际上是在做 a=(b=6)，b=6返回6

    printf("%d和%d的均值为：%f", a, b, c);

    return 0;
}
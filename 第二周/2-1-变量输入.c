#include <stdio.h>

int main()//计算100元的找零
{
    //修饰符，可以加在int前面，一旦初始化就不可修改
    const int AMOUNT = 100;
    int price = 0;
    //未初始化的整数
    int i;

    printf("输入金额：");
    scanf("%d", &price);
    
    //如果输入的不是数字，change会等于100
    int change = AMOUNT - price;

    printf("找零%d。\n", change);
    //未初始化的 i也会返回一个值——4200976
    printf("%d",i);

    return 0;
}
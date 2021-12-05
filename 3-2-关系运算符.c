#include <stdio.h>

int main()
{
    int a=1,b=2;

    //六个关系运算符
    printf("a=%d,b=%d\n", a, b);
    printf("a==b %d\n", a==b);
    printf("a!=b %d\n", a!=b);
    printf("a>b %d\n", a>b);
    printf("a<b %d\n", a<b);
    printf("a>=b %d\n", a>=b);
    printf("a<=b %d\n", a<=b);
    //关系运算符的优先级比算术运算低，但是比赋值运算高！
    printf("7>=3+4 %d\n", 7>=3+4);
    printf("(7>=3)+4 %d\n", (7>=3)+4);
    //判断是否相等的两个运算符==，!=优先级比其他的低
    printf("5>3==6>4 %d\n", 5>3==6>4);
    printf("1==6>4 %d\n", 1==6>4);
    //连续的关系运算符从左到右依次进行
    printf("6>5>4 %d\n", 6>5>4); 
        //和python注意区别，python中是(6>5)&(5>4)
    printf("5>6>-1 %d\n", 5>6>-1);
    return 0;
}
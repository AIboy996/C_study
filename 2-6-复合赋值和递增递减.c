#include <stdio.h>

//这些运算都是来自计算机底层，有这样一些计算单元

int main()
{
    int a=1,b=2;

    printf("初值 a:%d b:%d\n", a, b);
    //复合赋值！
    a += b;
    //其他的运算符也可以和=复合
    printf("a+=b a:%d b:%d\n", a, b);

    a *= b;
    printf("a*=b a:%d b:%d\n", a, b);

    //递增++、递减--，单目运算
    a ++;
    b --;
    printf("a++ b-- a:%d b:%d\n", a, b);

    //前缀和后缀！ ++和--都可以作为前缀或者后缀
    int c = a ++;  //a递增1，返回count原来的值
    printf("c = a++ a:%d c:%d\n", a, c);
    int d = ++ a;  //a递增1，返回递增之后的值
    printf("d = ++a a:%d d:%d\n", a, d);
    
    return 0;
}
#include <stdio.h>

int main()
{
    int a=2, b=1;
    
    // if语句的简写
    if (a > 1) printf("a > 1\n");

    //虽然不满足这个条件，但是下面的语句仍然会执行
    //这里的分号破坏了if的结构，实际上下面的句子和if没什么关系
    //if后面啥都没有，什么都不做
    if (a < 1);
        printf("a < 1\n");
    
    //C语言里还容易犯一个错误,把==写成=
    if (a=b) printf("a = b");
    //和python不同，C的赋值语句返回等号右边的值，因此不会报错
    //这里等价于if (b) printf("a = b");
    //其他的编辑器可能会给出一些warning，虽然不会报错，但是需要注意
    return 0;
}
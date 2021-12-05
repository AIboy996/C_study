#include <stdio.h>

int main()//计算时间差
{
    int hour1, minute1;
    int hour2, minute2;

    printf("输入第一个时间(hour minute)：");
    scanf("%d %d", &hour1, &minute1);
    printf("输入第二个时间(hour minute)：");
    scanf("%d %d", &hour2, &minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;

    //简单的if语句
    //和R语言的结构相同，但是必须要有分号
    if (im < 0){
        im = 60 + im;
        ih --;
    }

    //除数和余数！
    printf("时间差为%d小时%d分钟", ih, im);

    return 0;
}
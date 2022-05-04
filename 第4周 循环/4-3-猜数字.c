#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int guess;//需要给定初始值！不然会死循环？？为什么啊
    
    do
    {
        count ++;
        printf("请猜数：");
        scanf("%d", &guess);
        if (guess>number){
            printf("猜大了！\n");
        }else if(guess<number){
            printf("猜小了！\n");
        }else{
            printf("猜中了！\n");
            break; //其实这个break可有可无，即使没有break也会不满足循环条件结束循环
        }
    } while (guess!= number);

    printf("您共猜了%d次。", count);
    
    return 0;
}
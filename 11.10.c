// #include<stdio.h>
// int main()
// {
//     char arr='Z';
//     do
//     {
//         printf("%c ",arr);
//         arr--;
//     }while(arr>=65);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int arr = 0;
//     double sum = 0;
//     for(arr=1;arr<=100;arr++)
//     {
//         sum+=1.0/arr;
//     }
//     printf("%.3f",sum);
//     return 0;
// }
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[20];
    int i,j;
    int sum = 0;
    double ave;
    srand(time(0));
    for (i = 0; i <= 20; i++)
    {
        arr[i] = rand() % 100 + 101;
        printf("%d ", arr[i]);
        sum+=arr[i];
    }
    ave=sum/20.0;
    int b = arr[0];
    int c = arr[1];
    int max,min;
    for(i=0;i<20;i++)
    {
        if(arr[i]>b)
        {
            max = arr[i];
        }
        if(arr[i]<c)
        {
            min = arr[i];
        }
    }
    printf("最大值：%d，最小值：%d,平均值：%.3f",max,min,ave);
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int guess, number;
    
//     // 初始化随机数种子
//     srand(time(0));
    
//     // 随机生成一个 1 到 100 之间的整数
//     number = rand() % 100 + 1;
    
//     printf("欢迎来到猜数字游戏！请猜一个 1 到 100 之间的数字：\n");
    
//     // 不断让用户猜，直到猜对为止
//     do {
//         // 获取用户的猜测
//         printf("请输入你的猜测：");
//         scanf("%d", &guess);
        
//         if (guess > number) {
//             printf("你的猜测偏大了，请再试一次。\n");
//         } else if (guess < number) {
//             printf("你的猜测偏小了，请再试一次。\n");
//         } else {
//             printf("恭喜猜对了！你猜的数字是：%d\n", number);
//         }
//     } while (guess != number);
    
//     return 0;
// }

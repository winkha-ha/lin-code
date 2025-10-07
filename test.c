// 1
// 666
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// int main()
// {
// //     int x=0;
// //     scanf("%d",&x);
// //     printf("%x",x);
// //     return 0;
// // printf("%d\n",5==3);
// // printf("%d\n",5>3);
// // printf("%d\n",5<=3);
// printf("%d\n",7>=3+4);
// printf("%d\n",6>5>2);
// return 0;
// }

// int main()
// {
//     const int MINOR = 35;
//     int age = 0;

//     printf("请输入你的年龄：");
//     scanf("%d",&age);

//     printf("你的年龄是%d岁。\n",age);

//     if( age < MINOR)
//     {
//         printf("年轻是美好的！");
//     }
// printf("年龄决定了你的精神世界好好珍惜吧。\n");
// return 0;

// }
//int main()
//{
    // int a=0;
    // int b=0;
    // printf("请输入两个整数：");
    // scanf("%d %d",&a,&b);

    // int max = 0;
    // if( a > b )
    // {
    //     max = a;
    // }
    // if( b > a )
    // {
    //     max = b;
    // }
    // printf("大的那个是%d\n",max);
//     const double RATE = 8.25;
//     const int STANDARD = 40;
//     double pay = 0.0;
//     int hours;
    
//     printf("请输入工作的小时数：");
//     scanf("%d",&hours);
//     printf("\n");
//     if(hours>STANDARD)
//     {
//         pay=STANDARD*RATE+(hours-STANDARD)*(RATE*1.5);
//     }
//     else
//     {
//         pay=hours*RATE;
//     }
//    printf("应付工资：%f\n",pay); 


//     return 0;
// }
int main()
{
    // int a,b,c;
    // scanf("%d %d %d",&a,&b,&c);

    // int max = 0;

    // if(a>b)
    // {
    //     if(a>c)
    //     {
    //         max = a;
    //     }
    //     else{
    //         max = c;
    //     }
    // }
    // else
    // {
    //     if(b>c)
    //     {
    //         max=b;
    //     }
    //     else
    //     {
    //         max=c;
    //     }
    // printf("The max is %d",max);
    //  int score = 0;
    //     scanf("%d",&score);
    //     score /=10; 
    //  if(score>=90)
    //  {
    //     score=1;
    //  }
    //  else if(80<=score<90)
    //  {
    //     score=2;
    //  }
    //  else if(70<=score<80)
    //  {
    //     score=3;
    //  }
    //  else if(60<=score<70)
    //  {
    //     score=4;
    //  }
    //  else
    //  {
    //     score=5;
    //  }
    //  switch(score)
    //  {
    //     case 10:
    //     case 9:
    //     printf("A");
    //     break;
    //     case 8:
    //     printf("B");
    //     break;
    //     case 7:
    //     printf("C");
    //     break;
    //     case 6:
    //     printf("D");
    //     break;
    //     default:
    //     printf("E");
    //     break;

    //  }
// int x;
// int n=0;
// scanf("%d",&x);
// n++;
// x/=10;
// while(x>0)
// {
//     n++;
//     x /= 10;
// }
// printf("%d\n",n);
srand(time(0));
int number=rand()%10;
int conut=0;
int a=0;
do
{
    printf("请猜一点1~100的数");
    scanf("%d",&a);
    if(a>number)
    {
        printf("bigger!\n");

    }
    else if(a<number)
    {
        printf("smaller!\n");

    }
} while(a!=number);
    printf("%d\n",a);

    return 0;   
}


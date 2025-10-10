#include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int i, j, k;
//     int cnt = 0;
//     i = a;
//     while (i <= a + 3)
//     {
//         while (j <= a + 3)
//         {
//             while (k <= a + 3)
//             {
//                 if (i != j&&i!=k&&j!=k)
//                 {
//                             cnt++;
//                             printf("%d%d%d", i, j, k);
//                             if (cnt == 6)
//                             {
//                                 printf("\n");
//                                 cnt = 0;
//                             }
//                             else
//                             {
//                                 printf(" ");
//                             }
//                 }
//                 k++;
//             }
//             j++;
//         }
//         i++;
//     }
//     return 0;
// }
// int main()
// {
    // int n;
    // scanf("%d", &n);
    // n = 3;
    // int first = 1;
    // int i = 1;
    // while (i < n)
    // {
    //     first *= 10;
    //     i++;
    // }
    // printf("first=%d\n", first);
    // // 遍历100~999
    // i = first;
    // while (i < first * 10)
    // {
    //     int t = i;
    //     int sum = 0;
    //     do
    //     {
    //         int d = t % 10;
    //         t /= 10;
    //         int p = 1;
    //         int j = 0;
    //         while( j<n )
    //         {
    //             p *= d;
    //             j++;
    //         }
    //         sum += p;
    //     } while (t > 0);
    //     if( sum == i)
    //     {
    //         printf("%d\n",i);
    //     }
    //     i++;
//    
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int i,j;
//     i = 1;
//     while( i<=n )
//     {
//         j=1;
//         while( j<=i )
//         {
//             printf("%d*%d=%d",i,j,i*j);
//             if( i*j <10 )
//             {
//                 printf("    ");
//             }
//             else
//             {
//                 printf("   ");
//             }
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }
// int main()
// {
//     int m,n;
//     int i;
//     int cnt = 0;
//     int sum = 0;

//     scanf("%d %d", &m, &n);
//     if( m==1 )
//     {
//         m=2;   
//     }
//     for( i=m; i<=n; i++)
//     {
//         int isPrime = 1;
//         int k;
//         for( k =2; k<i-1; k++)
//         {
//             if( i%k == 0)
//             {
//                 isPrime = 1;
//                 break;
//             }
//         }
//         //判断是否是素数
//         if( isPrime )
//         {
//             cnt++;
//             sum+=i;

//         }
//     }
//     printf("总和是%d，个数是%d",sum,cnt);
//     return 0;
// int// }
//  main()
// {
//     int number,n;
//     int inp;
//     int finished = 0;
//     int cnt = 0;
//     scanf("%d %d", &number, &n);
//     do
//     {
//         scanf("%d", &inp);
//         cnt++;
//         if( inp<0 )
//         {
//             printf("Game Over\n");
//             finished = 1;
//         }
//         else if(inp > number)
//         {
//             printf("Too big!\n");
//         }
//         else if(inp < number)
//         {
//             printf("Too small!\n");
//         }
//         else
//         {
//             if( cnt == 1)
//             {
//                 printf("Bingo!\n");               
//             }
//             else if( cnt <=3 )
//             {
//                 printf("lucky you!!\n");
//             }
//             else
//             {
//                 printf("good guess!\n");
//             }
//             finished =1;
//         }
//         if( cnt==n )
//         {
//             if( !finished )
//             {
//                 printf("game over!\n");
//                 finished = 1;
//             }
//         }
//     } while ( !finished );
//     return 0;
// }

// int main()
// {
//     int n;
//     double dividend,divisor;
//     double sum = 0.0;
//     int i;
//     double t;

//     scanf("%d", &n);
//     //n=2000;
//     dividend = 2;
//     divisor = 1;
//     for( i=1; i<=n; i++)
//     {
//         sum += dividend/divisor;
//         t = dividend;
//         dividend=dividend+divisor;
//         divisor=t;
//     }
//     printf("%.2f\n", sum);
//     return 0;
// }
// int main()
// {
//     int dividend,divisor;
//     scanf("%d/%d", &dividend, &divisor);

//     int a=dividend;
//     int b=divisor;
//     int t;
//     while( b>0 )
//     {
//         t= a%b;
//         a = b;
//         b = t;
//     }
//     printf("%d/%d\n", dividend/a, divisor/a);
//     return 0;
// }



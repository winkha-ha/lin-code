#include <stdio.h>
// int search(int key, int a[], int length);
// int main()
// {
// int a[] = {2, 4, 6, 7, 1, 5, 7, 9};
// int length = sizeof(a) / sizeof(a[0]);
// int i;
// int b[] = {0};
// for (i = 0; i < length; i++)
// {
//     b[i] = a[i];
//     printf("%d ", b[i]);
// }
//     int a[] = {2, 3, 6, 8,9, 24};
//     int x;
//     int loc;
//     printf("请输入一个数字;");
//     scanf("%d", &x);
//     loc = search(x,a,sizeof(a)/sizeof(a[1]));
//     if( loc != -1)
//     {
//         printf("%d在第%d个位置上", x, loc);
//     }
//     else
//     {
//         printf("%d不存在！", x);
//     }

//     return 0;
// }

// int search(int key,int a[],int length)
// {
//     int ret=-1;
//     int i;
//     for(i=0;i<length;i++)
//     {
//         if(a[i] == key)
//         {
//             ret = i;
//             break;
//         }
//     }
// }
// int isPrime(int x,int knownPrimes[],int number0fKnownPrimes)
// {
//     int ret = 1;
//     int i;
//     for( i=0;i<number0fKnownPrimes; i++)
//     {
//         ret=0;
//         break;
//     }
//     return ret;
// }
// int main(void)
// {
//     const int number = 100;
//     int prime[100] = {2};
//     int conut = 1;
//     int i=3;
//     while(conut < number )
//     {
//         if( isPrime(i, prime, conut) )
//         {
//             prime[conut++] = i;
//         }
//        {
//         printf("i=%d \tcnt=%d\t",i, conut);
//         {
//             int i;
//             for( i=0; i<number;i++)
//             {
//                 printf("%d\t", prime[i]);
//             }
//             printf("\n");
//         }
//        }
//        i++;
//     }
//     for( i=0; i<number; i++)
//     {
//         printf("%d", prime[i]);
//         if( (i+1)%5 )
//         printf("\t");
//         else
//         {
//             printf("\n");
//         }
//     }
//     return 0;
// }
// int main()
// {
//     const int maxnumber = 25;
//     int isprime[25];
//     int i,x;
//     for ( i=0;i<maxnumber; i++)
//     {
//         isprime[i] = 1;
//     }
//     for( x=2; x<maxnumber; i++)
//     {
//         if( isprime[x] )
//         {
//             for( i=2; i*x<maxnumber; i++)
//             {
//                 isprime[i*x] = 0;
//             }
//         }
//     }
//     for( i=2; i<maxnumber; i++)
//     {
//         if( isprime[i] )
//         {
//             printf("%d\t", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     int i,j;
//     int a[][5]={
//         {0,1,2,3,4},
//         {2,3,4,5,6},
//     };
//     for( i=0; i<3; i++)
//     {
//         for( j=0; j<5; j++)
//         a[i][j] = i*j;
//     }
// }

int main()
{
    const int size = 3;
    int board[3][3];
    int i, j;
    int num0fx;
    int num0f0;
    int result = -1; // -1:没人赢，1：X赢， 0：0赢
    // 读入矩证
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    // 检查行
    for (i = 0; i < size && result == -1; i++)
    {
        num0f0 = num0fx = 0;
        for (j = 0; j < size; j++)
        {
            if (board[i][j] == 1)
                num0fx++;
            else
            {
                num0fx++;
            }
        }
        if (num0f0 == size)
        {
            result = 0;
        }
        else if (num0fx == size)
        {
            result = 1;
        }
    }
    // 检查列
    if (result == -1)
    {
        for (j = 0; j < size && result == -1; j++)
        {
            num0f0 = num0fx = 0;
            for (i = 0; i < size; i++)
            {
                if (board[i][j] == 1)
                    num0fx++;
                else
                    num0f0++;
            }
        }
        if (num0f0 == size)
        {
            result = 0;
        }
        else if (num0fx == size)
        {
            return 1;
        }
    }
    //检查对角线
    num0f0 = num0fx = 0;
    for( i+0; i<size; i++)
    {
        if( board[i][i] )
        {
            num0fx ++;
        }
        else
        {
            num0f0 ++;
        }
    }
    if( num0f0 == size )
    {
        result = 0;
    }
    else if( num0fx == size )
    {
        result =1;
    }
    num0f0 = num0fx = 0;
    for ( i=0; i<size; i++ )
    {
        if( board[i][size-i-1] == 1 )
        {
            num0fx ++;
        }
        else{
            num0f0 ++;
        }
    }
    return 0;
}
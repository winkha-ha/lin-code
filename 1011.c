#include <stdio.h>
// int max(int a,int b)
// {
//     int ret;
//     if( a>b )
//     {
//         return a;
//     }
//     else{
//         ret = b;
//     }
//     return ret;
// }
// int main()
// {
//     int a=5;
//     int b=6;
//     int c;
//     c=max(10,11);
//     c=max(a,b);
//     c=max(c,23);
//     printf("%d\n", max(a,b));

//     return 0;
// }
// void cheer(int i)
// {
//     printf("cheer %d\n", i);
// }

// int main()
// {
//     cheer(2.4);
//     return 0;
// }
// void swap();

// int main()
// {
//     int a = 6;
//     int b = 5;

//     swap(a,b);

//     printf("a=%d,b=%d\n", a, b);

//     return 0;
// }
// void swap(double a,double b)
// {
//     int swap;
//     int t = a;
//     printf("in swap,a=%f,b=%f\n", a, b);
//     a = b;
//     b = t;
// }
// int main(void)
// {
//     return 1;
// }
int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];
    scanf("%d", &x);
    while (x != -1)
    {
        number[cnt] = x;
        //
        {
            int i;
            printf("%d\t", cnt);
            for (i = 0; i <= cnt; i++)
            {
                printf("%d\t", number[i]);
            }
            printf("\n");
        }
        //
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if (cnt > 0)
    {
        printf("%f\n", sum / cnt);
        int i;
        for (i = 0; i < cnt; i++)
        {
            if (number[i] > sum / cnt)
            {
                printf("%d\n", number[i]);
            }
        }
    }







    


    return 0;
}
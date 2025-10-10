#include<stdio.h>
//#include<stdbool.h>
// int main()
// {
    // printf("%f\n", 12.0/0.0);
    // printf("%f\n", -12.0/0.0);
    // printf("%f\n", 0.0/0.0);
    // float a,b,c;
    // a = 1.345f;
    // b = 1.123f;
    // c = a + b;
    // if( c == 2.468 )
    // printf("相同");
    // else
    // printf("不相等！\n c=%.10f,或%f\n",c,c);
    // char c;
    // char d;
    // c = 1;
    // d = 'A';
    // if( c == d )
    // {
    //     printf("相等\n");
    // }
    // else
    // {
    //     printf("不相等\n");
    // }
    // printf("d=%d\n", d);
    // char c;
    // scanf("%c", &c);
    // printf("c=%d\n", c);
    // printf("c='%c'\n", c);
   
    // char c = 'A';
    // c++;
    // printf("%c\n", c);
    // printf("123\t456\n");
    // printf("12\t3456\n");
    // int i = 32768;
    // short s = (short)i;
    // printf("%d\n", i);
    // printf("%d", s);
    // double a = 3.0;
    // double b = 2.0;
    // int i = (int)(a/b);
    // printf("%f %d", i, i);
    // int a = 7.0;
    // int b = 4;
    // double d = (double)(a / b);
    // printf("%d %f", d, d);
    // bool b = 6>5;
    // bool a = true;
    // printf("%d %d", b, a);
    // int x = 0;
    // scanf("%d", &x);
    // if( 4<x<6 )//这个是4<x会先算，所以相当于1.
    // //1包小于6的所以成立！要些成x>4 && x<6才对！
    // {
    //     printf("good!");
    // }
    //! > && > ||
//  int count = (count > 20)?count - 10 : count + 10;
//  if(count > 20)
//  count = count - 10;
//  else
//  count = count + 10;
// int i;
// int sum;

// for( i=1,sum=0; i<=10;i++ )
// {
//     sum+=i;
// }
// printf("%d到%d的和是%d\n", 1, 10, sum);
// for( i=20,sum=0; i<=30;i++ )
// {
//     sum+=i;
// }
// printf("%d到%d的和是%d\n", 20, 30, sum);
// for( i=35,sum=0; i<=45;i++ )
// {
//     sum+=i;
// }
// printf("%d到%d的和是%d\n", 35, 45, sum);
//直接等价于

//     return 0;
// }
void sum(int begin,int end)
{
    int i;
    int sum = 0;
    for( i=begin;i<=end;i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}
int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;

}
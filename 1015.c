#include<stdio.h>
#include<stdlib.h>
// void f(int* p);
// void g(int k);
// int main()
// {
//     int i = 6;
//     printf("&i = %p\n", &i);
//     f(&i);
//     g(i);

//     return 0;
// }
// void f(int* p)
// {
//     printf("p = %p\n", p);
//     printf("*p = %d\n", *p);
//     *p = 26;
// }

// void g(int k)
// {
//     printf("k = %d\n", k);
// }
// void swap(int *pa,int *pb);

// int main()
// {
//     int a = 5;
//     int b = 6;
//     swap( &a, &b);
//     printf("a=%d,b=%d",a,b);

//     return 0;
// }


//
// void swap(int* pa,int* pb)
// {
//     int t = *pa;
//     *pa = *pb;
//     *pb = t;
// }
// void minmax(int *a,int len,int* min,int* max);

// int main()
// {
//     int a[] = {1,2,3,4,5,6,7,8,9,10};
//     int min,max;
//     printf("main sizeof(a) = %lu\n", sizeof(a));
//     printf("main a=%p\n",a);

//     minmax(a, sizeof(a)/sizeof(a[0]),&min, &max);
//     printf("main a[0] = %d\n",a[0]);
//     printf("min=%d,max=%d\n", min, max);
//     int* p = &min;
//     printf("*p=%d\n", *p);
//     printf("p[0] = %d\n",p[0]); 

//     return 0;

// }

// void minmax(int *a,int len,int *min,int *max)
// {
//     int i;
//     printf("minmax sizeof(a) = %lu\n", sizeof(a));
//     printf("minmax a=%p\n", a);
//     a[0] = 1000;
//     *min = *max = a[0];
//     for(i=1;i<len;i++)
//     {
//         if( a[i]<*min)
//         {
//             *min=a[i];
//         }
//         if( a[i]>*max)
//         {
//             *max = a[i];
//         }
//     }
// }

//分割

// int divide(int a,int b,int* result);

// int main(void)
// {
//     int a = 5;
//     int b = 6;
//     int c;
//     if( divide(a,b,&c))
//     {
//         printf("%d/%d = %d\n", a, b, c);
//     }
//     return 0;
// }

// int divide(int a,int b,int* result)
// {
//     int ret = 1;
//     if( b == 0 ) ret = 0;
//     else{
//         *result = a/b;
//     }
//     return ret;
// }

// const int* p = &i;
// 意思是*p的地址定下来了；
// int* const p = &i;
// 意思是*p的值不能被修改了；

// int i;
// const int* p1 = &i;
// int const* p2 = &i;
// int *const p3 = &i;

// int main(void)
// {
//     char ch[] = {0,1,2,3,4,5,6,7,8,9,};
//     char *p = ch;
//     char *p1 = &ch[5];
//     printf("p = %p\n", p);
//     printf("p+1 = %p\n", p+1);
//     printf("p1 - p=%d\n", p1-p);

//     int ai[] = {0,1,2,3,4,5,6,7,8,9,};
//     int *q = ai;
//     int *q1 = &ai[6];
//     printf("q= %p\n", q);
//     printf("q+1 = %p\n", q+1);
//     printf("q1-q = %d\n", q1 - q);
//     double ac[] = {0,1,2,3,4,5,6,7,8,9,};
//     double *r = ac;
//     printf("r= %p\n", r);
//     printf("r+1 = %p\n", r+1);

//     return 0;
// }

// int main(void)
// {
//     char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
//     char *p = &ac[0];
//     int i;
//     for( i= 0; i<sizeof(ac)/sizeof(ac[0]);i++)
//     {
//         printf("%d\n", ac[i]);
//     }
//     //for(p=ac;*p != -1;p++ )
//     while(*p != -1)
//     {
//         printf("%d\n", *p++);
//     }
//     return 0;
// }

int main()
{
    
    return 0;
}
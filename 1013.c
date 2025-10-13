#include<stdio.h>
int main()
{
    int a[10];

    printf("%p\n", &a);
    printf("%p\n", a);
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);

    return 0;
}

//int i;
//int* p = &i;
//int* p,q;
//int *p,q;

// void f(int* p);
// int i;
// f(&i);
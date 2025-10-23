#include<stdio.h>
menu()
{
    printf("*****************************\n");
    printf("****** 1.play  0.exit  ******\n");
    printf("*****************************\n");
}
int main()
{
    int input = 0;
    do
    {
        menu();//打印菜单
        printf("请选择>:");
        scanf("%d",&input);
    } while ();
    return 0;
}
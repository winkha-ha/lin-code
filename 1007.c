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
int main()
{
    int i=0;
    scanf("%d",&i);

   int n=sizeof(i);
   int a=pow(10,n-1);
   printf("%d",a);
   while(n>=3)
   {
     
   }


}
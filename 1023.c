// 某商场给顾客购物的折扣率如下：
// 购物金额<200元，不打折；
// 200元≤购物金额＜500元，9折；
// 500元≤购物金额＜1000元，8折；
// 购物金额≥1000元，7.5折。
// 输入一个购物金额（允许有小数），输出购物实际付款金额。结果取1位小数。
// 如输入：900   输出：实际付款金额是720.0
// #include<stdio.h>
// int main()
// {
//     float num = 0;
//     printf("输入一个购物金额：>\n");
//     scanf("%f", &num);
//     if( num<200 )
//     {
//         printf("不打折");
//     }
//     else if( num>=200 && num<500 )
//     {
//         num*=0.9;
//         printf("实际付款金额是%f", num);
//     }
//     else if( num>=500 && num<1000 )
//     {
//         num*=0.8;
//         printf("实际付款金额是%f", num);
//     }
//     else
//     {
//         num*=0.75;
//         printf("实际付款金额是%f", num);
//     }
//     return 0;
// }
//任意输入一个1~7之间的整数，输出其代表的星期几（Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday），
//若输入超出范围，则给出相应的提示信息。（要求用switch语句完成）
//如输入：3   输出：Wednesday

// #include<stdio.h>
// int main()
// {
//     int day = 0;
//     scanf("%d", &day);
//     switch(day)
//     {
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thursday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("Saturday");
//         break;
//         case 7:
//         printf("Sunday");
//         break;
//     }
//     return

// }
// 已知天干的顺序是：甲、乙、丙、丁、戊、己、庚、辛、壬、癸；地支的顺序是：子、丑、寅、卯、辰、巳、午、未、申、酉、戌、亥。将天干和地支连起来，就组成了一个天干地支的年份，
// 例如2020年是庚子年，每过一年，天干和地支都会移动到下一个，例如2021年是辛丑年。输入一个年份，输出这一年的天干地支年份。（要求用switch语句完成）
// 如输入：2023   输出：2023年是癸卯年
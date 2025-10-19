#include <stdio.h>

int main()
{
    char *s = "Hello world";
    //s[0]='B';
    char *s2 = "Hello world";
    char s3[] = "hello world";

    //printf("Here!s[0]=%c\n", s[0]);
    printf("s =%p\n", s);
    printf("s2 = %p\n", s2);
    printf("Here!s[0]=%c\n", s[0]);
    printf("s3 = %p\n", s3);
    s3[0] = 'B';
    return 0;
}
int main()
void f(void)
{
    char word[8];
    char word2[8];
    scanf("%7s", word);
    scanf("%7s", word2);

    printf ("%s##\n", word);
    printf("%s##%s##\n",word, word2);
}

int main(void)
{
    f();

    return 0;
}
int main(void)
{
    char buffer[100]="";
    printf("buffer[0] =%s",buffer[0]);
    return 0;
}
#include <stdio.h>  // 这行是让电脑能说话（打印东西）

int main() {
    char candy[2][3][10] = {  // 2行3列，每格装字符串（字）
        {"红糖", "蓝糖", "黄糖"},
        {"绿糖", "紫糖", "橙糖"}
    };

    printf("第一行第二列的糖是：%s\n", candy[0][1]);  // 输出：蓝糖

    return 0;
int main(int argc,char const *argv[])
{
    // int i;
    // for (i=0;i<argc; i++)
    // {
    //     printf("%d:%s\n", i, argv[i]);
    // }
    int ch;

    while((ch = getchar())!=EOF)
    {
        putchar(ch);
    }
    printf("EOF\n");
    return 0;
}
size_t mylen(const char* s)
{

    int idx = 0;
    while(s[idx] != '\0')
    {
        idx++;

    }
    return cnt;
}
int main(int argc, char const *argv[])
{
    //size_t strlen(const char *s);
    char line[]="Hello";
    printf("strlen=%lu\n",strlen(line));
    printf("sizeof=%lu\n",sizeof(line));
    return 0;
}
int mycmp(const char* s1,const char* s2)
{
    // int idx = 0;
    // while( s1[idx] == s2[idx]&&s1[idx] != '\0' )
    // {
    //     if(s1[idx] != s2[idx] )
    //     {
    //         break;
    //     }
    //     else if(s1[idx] == '\0')
    //     {
    //         break;
    //     }
    //     idx++;
    while(*s1 == *s2 && *s1 !='\0')
    {
        s1++;
        s2++;
    }

    return *s1 - *s2;
}
int main()
{
    char s1[] = "abc";
    char s2[] = "abc ";
    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",'a'-'A');
    return 0;
}
char* mycpy(char* dst, const char* src)
{
    int idx = 0;
    while(src[idx])
    {
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = '\0';
    return dst;
}
int main()
{
    char s1[] = "abc";
    char s2[] = "abc";
    strcpy(s1,s2);
    return 0;
}
int main(int argc, char const *argv[])
{
    char s[] = "hello";
    char *p = strchr(s, 'l');
    char *t = (char*)malloc(strlen(p)+1);
    strcpy(t,p);
    printf("%s\n", p);
    free(t);

    return 0;
}

int main(int argc, char const *argv[])
{
    const int red = 0;
    const int yellow = 1;
    const int green = 2;
    int color = -1;
    char *colorName = NULL;

    printf("输入你喜欢的颜色的代码：");
    scanf("%d", &color);
    switch (color)
    {
    case red:
        colorName = "red";
        break;
    case yellow:
        colorName = "yellow";
        break;
    case green:
        colorName = "green";
        break;
    default:
        colorName = "unknown";
        break;
    }
    printf("你喜欢的颜色是%s\n", colorName);
    return 0;
}
enum COLOR{RED, YELLOW, GREEN};

int main(int argc, char const *argv[])
{
    int color = -1;
    char *colorName = NULL;

    printf("输入你喜欢的颜色的代码：");
    scanf("%d", &color);
    switch( color )
    {
        case RED:colorName = "red";break;
        case YELLOW:colorName = "yellow";break;
        case GREEN:colorName = "green"; break;
        default: colorName = "unknow"; break;
    }
    printf("你喜欢的颜色是%s\n",colorName);
    return 0;
}
enum color {red,yellow,green};

void f(enum color c);

int main(void)
{
    enum color t = red;

    scanf("%d", &t);
    f(t);
    return 0;
}

void f(enum color c)
{
    printf("%d\n", c);
}
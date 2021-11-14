#include<stdio.h>
int main()
{
    char a,b,c,d;
    printf("Please putin the function mode.\n");
    printf("Now we have two choices:\"1&2\".\n");
    a=getchar();
    switch(a)
    {
        case '1':
        {
            char a1;
            extern void f11(void);
            printf("Please putin the parameter mode.\n");
            printf("We only have one mode:\"1\".\n");
            getchar();
            a1=getchar();
            f11();
            break;
        }
        case '2':
        {
            char b1;
            extern void f21(void);
            printf("Please putin the parameter mode.\n");
            printf("We have two mode:\"1&2\".\n");
            getchar();
            b1=getchar();
            f21();
            break;
        }
    }
    printf("please click \"Enter\" to continue.\n");
    getchar();
    getchar();
}
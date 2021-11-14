#include<stdio.h>
int main()
{
    printf("Cilck the \"Enter\" to begin\n");
    getchar();
    char a,b,c,d;
    printf("----Please putin the function mode.\n");
    printf("---Now we have two choices:\"1&2\".\n");
    printf("---List:\n   1 is linear function\n   2 is quadratic function\n");
    printf("Click the char...\n");
    a=getchar();
    switch(a)
    {
        case '1':
        {
            char a1;
            extern void f11(void);
            printf("--Please putin the parameter mode.\n");
            printf("-We only have one mode:\"1\".\n");
            printf("Click the char...\n");
            getchar();
            a1=getchar();
            f11();
            break;
        }
        case '2':
        {
            char b1;
            extern void f21(void);
            extern void f22(void);
            printf("--Please putin the parameter mode.\n");
            printf("-We have two mode:\"1&2\".\n");
            printf("-List:\n 1 is two dots and a height parameter\n 2 is three dots\n");
            printf("Click the char...\n");
            getchar();
            b1=getchar();
            if(b1=='1')
            {
                f21();
            }
            else
            {
                f22();
                putchar('\n');
            }
            break;
        }
    }
    printf("please click \"Enter\" to continue.\n");
    getchar();
    getchar();
}
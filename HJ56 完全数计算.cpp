#include<stdio.h>
int main()
{
    int num;
    while(scanf("%d",&num) != EOF)
    {
        if(num < 6)
            printf("0\n");
        else if(num < 28)
        {
            printf("1\n");
        }
        else if(num < 496)
        {
            printf("2\n");
        }
        else if(num < 8128)
        {printf("3\n");}
        else
            printf("4\n");
    }
    return 0;
}

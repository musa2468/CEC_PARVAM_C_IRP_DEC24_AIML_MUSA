#include<stdio.h>

int main()
{
    for(int i=0; i<=25; i++)
    {
        if(i%2 ==i || i%3 ==i || i%5 ==i || i%7 ==i || i%9 ==i)
            printf("%d\t", i);
    }
    printf("");

    return 0;
}
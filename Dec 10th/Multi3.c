#include<stdio.h>

int main()
{
    int n=2,m;

    // printf("%d", n);

    for (int i=0; i<=6; i++)
    {
        m = n * 3;
        printf("%d\t", n, m);
        n = m;
    }
    
    


    // printf("");

    return 0;
}
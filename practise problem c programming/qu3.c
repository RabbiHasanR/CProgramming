#include <stdio.h>

int find_larg();
int main()
{
    int a,b,c;
    int max;
    printf("Enter number:");
    scanf("%d %d %d",&a,&b,&c);
    max=find_larg(a,b,c);
    printf("%d",max);

    return 0;
}

int find_larg(int x,int y,int z)
{
    int big;
    if(x>y)
    {
        big=x;
    }
    else if(y>z)
    {
        big=y;
    }
    else
        big=z;

    return(big);

}

#include <stdio.h>

int first_array(int a[]);
int second_array(int b[]);

int main()
{
    int c[5],d[5],e,f,add;
    printf("enter c:");
    for(e=0;e<5;e++){
        scanf("%d",&c[e]);
        c[e]++;
    }

        printf("enter d:");
    for(f=0;f<5;f++){
        scanf("%d",&d[f]);

        d[f]++;
    }

    add=first_array(c[]) + second_array(d[]);
    printf("\n%d",add);

    return 0;
}
int first_array(int a[])
{
   int i,sum;
   sum=+a[i];
   return(sum);
}
int second_array(int b[])
{
    int j,sum2;
    sum2=+b[j];
    return(sum2);
}

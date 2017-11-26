#include <stdio.h>


int main()
{
    int a,b,c,d,e;
    int *p,*q,*r,*s,*t;
    p=&a;
    q=&b;
    r=&c;
    s=&d;
    t=&e;
    a=1;
    b=1;
    c=1;
    d=2;
    e=3;
    printf("section A:\n");
    printf("\n%d \t %d \t %d \t %d \t %d \t %d",*p,a,*q,b,*r,c);
    *p=*q=*s;
    printf("\nsection B:\n");
    printf("\n%d \t %d \t %d \t %d \t %d \t %d",*p,a,*q,b,*s,d);
    *p=*q=*t;
    printf("\nsection C:\n");
    printf("\n%d \t %d \t %d \t %d \t %d \t %d",*p,a,*q,b,*t,e);


    return 0;
}

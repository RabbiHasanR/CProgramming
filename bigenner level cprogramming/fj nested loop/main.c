#include <stdio.h>

int main()
{
    int a=0,i,b[6]={1,1,1,1,1,1};
    int *p,*q;
    p=&b[0];
    q=&b[0];
    for(i=0;i<3;i++){
    a++;
        printf("\nsection %d\n",a);
         for(i=0;i<6;i++){
            printf("\t%d",b[i]);


}
                      a++;
        printf("\nsection %d\n",a);
        for(i=0;i<6;i++)
        {
            b[i]=2;
            printf("\t%d",*p);
            b[i]++;
            p++;
        }
        a++;
        printf("\nsection %d\n",a);
        for(i=0;i<6;i++)
        {
            b[i]=3;
            printf("\t%d",*q);
            b[i]++;
            q++;
        }

    }
    return 0;
}

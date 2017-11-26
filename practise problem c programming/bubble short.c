#include <stdio.h>
int main()
{
    int rabbi,hasan,jas,boltu,shaily[20];
    printf("Enter the total no. of elements:");
    scanf("%d",&rabbi);
    printf("Enter %d elements\n",rabbi);
    for(jas=0;jas<rabbi;jas++)
    {
        scanf("%d",&shaily[jas]);
    }
    for(jas=rabbi-2;jas>=0;jas--){
        for(boltu=0;boltu<=jas;boltu++)
        {
            if(shaily[boltu]>shaily[boltu+1])
            {
                hasan=shaily[boltu];
                shaily[boltu]=shaily[boltu+1];
                shaily[boltu+1]=hasan;
            }
        }
    }
    printf("After sorting\n");
    for(jas=0;jas<rabbi;jas++)
    {
        printf("%d\t",shaily[jas]);
    }
    return 0;
}


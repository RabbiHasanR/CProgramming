#include<stdio.h>
main()
{
    int a[100],first,last,mid,i,n,m,k=0,p=0;
    for(;;)
    {
    printf ("please enter the integer\n");
    scanf("%d",&a[k]);
    k++;
    p++;
    printf("please enter -99 to breake\n");
    scanf("%d",&m);
    if(m==-99)
        break;
    }
    for (i=0;i<=p-1;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("please enter the serch value\n");
        scanf("%d",&n);
        first=0;
        last=p-1;
        mid=first+last/2;
    for(i=0;i<=p-1;i++)
    {

        if(first<last)
        {
            if(a[mid]==n)
            {
               printf("value found");
                break;
            }




               else if(a[mid]>n)
               {
                  last=mid-1;
                  mid=first+last/2;
               }



            else
            { first=mid+1;
                mid=first+last/2;
            }



            }
             else



                printf("value not found");



        }


}

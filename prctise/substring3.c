#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int i=0,j=0,k=0,count=0,l=0,k1=0;
    char a[100],b[100];
    //clrscr();
    printf("Enter the string:\n");
    gets(a);
    printf("Enter the substring:\n");
    gets(b);
    l=strlen(b);
    while(a[i]!=EOF)
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
            k1=1;

            if(j==l)
            {
                j=0;
                k=1;
                count=count+1;
            }
        }
        else
        {
            if(k1==1)
            {
                j=0;
                k1=0;
            }
            else
                i++;
        }
    }
    if(k1==1)
    {
        printf("The given substring present in the mainstring\n");
        printf("it is present %d times",count);
    }
    else
    {
        if(k==0)
            printf("the given substring is not present here\n");
    }
    getch();
    return 0;
}

///* Example 1:print all integer batween m & n in asending order*///
/// input:6 12
///output:6 7 8 9 10 11 12
///input:6 2
///output:2 3 4 5 6

#include <stdio.h>
int main()
{
    int a,b,i,c;
    printf("Input:");
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a;
        a=b;
        b=c;}
    printf("Output:");
    ///for(i=a;i<=b;i++)
    i=a;
   do {
        printf("%d\t",i);
     i++;
    }
     while(i<=b);
    return 0;
}

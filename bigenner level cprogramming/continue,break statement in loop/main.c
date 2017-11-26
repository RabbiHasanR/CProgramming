#include <stdio.h>


int main()
{
    int num,i,product=1;
   /* printf("Enter number:");
    scanf("%d",&num);*/
    for(i=0;i<4;i++){
     printf("Enter number:");
    scanf("%d",&num);
    if(num==2){
        //continue;
        break;
    }
    product*=num;
    }
    printf("product:%d",product);
    return 0;
}

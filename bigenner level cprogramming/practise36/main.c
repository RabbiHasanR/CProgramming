#include <stdio.h>


int main()
{
    int ssc,hsc,gpa,count=0;
    double wav,tf,TF;
    char choice;
    printf("continue?y=yes or n=no:");
    scanf("%c",&choice);
   /* while(choice=='y' )*/

   do
{
    printf("enter tution fee: ");
    scanf("%lf",&tf);
    printf("enter ssc gpa: ");
    scanf("%d",&ssc);
    printf("enter hsc gpa: ");
    scanf("%d",&hsc);
    gpa=ssc+hsc;
    printf("\ntotal gpa:%d",gpa);
     //count++;
    if(gpa==10)
    {
        wav=(tf*(100/100));
        printf("\nwaver:%lf",wav);
        TF=tf-wav;
        printf("\ntution fee:%lf",TF);
        printf("continue?y=yes or n=no:");
    scanf("%c",&choice);
    }
    else if(gpa<10 && gpa>=9){
        wav=(tf*.5);
        printf("\nwaver:%lf",wav);
        TF=tf-wav;
        printf("\ntution fee:%lf",TF);
           printf("continue?y=yes or n=no:");
    scanf("%c",&choice);
}
    else if(gpa>=8 && gpa<9){
        wav=(tf*.3);
        printf("\nwaver:%lf",wav);
        TF=tf-wav;
        printf("\ntution fee:%lf",TF);
                printf("continue?y=yes or n=no:");
    scanf("%c",&choice);
}
    else

         printf("\n don't waver");
        printf("continue?y=yes or n=no:");
    scanf("%c",&choice);


}
while(choice=='y');
count++;
printf("total count:%d",count);


    return 0;
}

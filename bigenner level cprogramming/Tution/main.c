#include <stdio.h>


int main()
{
  double ssc ,hsc , gpa,tf ,waiver;
  char choice ;
  int number ,count=0;
  printf("Enter Y for count or N for Exit\n");
  scanf("%c",&choice);
  while(choice=='y'){
    printf("enter tution fee: \n");
    scanf("%lf",&tf);
    printf("enter ssc gpa: \n");
    scanf("%lf",&ssc);
    printf("enter hsc gpa: \n");
    scanf("%lf",&hsc);
    gpa=ssc+hsc;
    printf("\ntotal gpa:%lf\n",gpa);
    if(gpa==10){
        waiver = tf;
        printf("Waiver 100 is %lf\n",waiver);
        tf=0;
        printf("Your Tution fee %lf\n",tf);
        printf("Enter Y for count or N for Exit\n");
       scanf("%c",&choice);
    }
    else if (gpa>=9 && gpa<10){
        waiver = tf*0.5;
        printf("Waiver 100 is %lf\n",waiver);
        tf=tf-waiver;
         printf("Your Tution fee %lf\n",tf);
         printf("Enter Y for count or N for Exit\n");
       scanf("%c",&choice);
    }
    else if(gpa>=8 && gpa<9){
         waiver = tf*0.33;
        printf("Waiver 100 is %lf\n",waiver);
        tf=tf-waiver;
         printf("Your Tution fee %lf\n",tf);
         printf("Enter Y for count or N for Exit\n");
       scanf("%c",&choice);
    }
    else {
        printf("No Waiver \n");
        printf("Enter Y for count or N for Exit\n");
       scanf("%c",&choice);

    }

        count++;
  }



}

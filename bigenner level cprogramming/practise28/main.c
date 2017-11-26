#include <stdio.h>
#define KMS_PER_MILE 1.069
int main(){
    int choose ;
    double kiloMeter , mile ;
    printf(" 1=kilometer to mile\n 2=mile to kilometer\n enter choose: ");
    scanf("%d",&choose);
    switch(choose){

case 1:
    printf("Enter Kilometer : ");
    scanf("%lf",&kiloMeter);
    mile = kiloMeter*KMS_PER_MILE ;
    printf("%lf MILe", mile);
    break ;
case 2:
    printf("enter mile: ");
    scanf("%lf",&mile );
    kiloMeter=mile/KMS_PER_MILE;
    printf("%lf KILOMETER",kiloMeter);

    }


return 0 ;
}

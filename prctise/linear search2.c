#include <stdio.h>
int main(){
int jeky=0,pospo=0,riaz[100],sv,n;
for(;;){
for(;;){
printf("Enter Some integer Number:\n");
scanf("%d",&riaz[pospo]);
pospo++;
printf("Enter -99 to break:\n");
scanf("%d",&n);
if(n==-99)
break;
}
printf("Your given Numbers Are:\n");
for(jeky=0;jeky<pospo;jeky++){
printf("%d\n",riaz[jeky]);
}
for(;;){
printf("Enter the search value:\n");
scanf("%d",&sv);
for(jeky=0;jeky<pospo;jeky++){
if(riaz[jeky]==sv){
printf("%d is found at Location %d\n",sv,jeky+1);
break;
}
if(jeky==pospo){
printf("You Given Number is not present in the dataset\n");
}
}
printf("Enter -99 to break:\n");
scanf("%d",&n);
if(n==-99)
break;
}
printf("Enter -99 to break:\n");
scanf("%d",&n);
if(n==-99)
break;
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE *fin,*fin1,*fout,*fck;
 int a,b;
 fin=fopen("input1.txt","w");
 while(scanf("%d",&a)!=EOF)
 {
   fprintf(fin,"%d\n",a);
 }
 fclose(fin);
 fin1=fopen("intpu1.txt","r");
 fout=fopen("output1.txt","w");
 while(fscanf(fin1,"%d",&a)!=EOF)
 {
   fprintf(fout,"%d\n",a);

 }
 fclose(fin1);
 fclose(fout);
 /*fac=fopen("acoutput.txt","r");
 fck=fopen("output.txt","r");
 while(fscanf(fac,"%d",&a)!=EOF)
 {
     fscanf(fck,"%d",&b);
     if(a!=b)
        printf("wrong answer");
 }
 printf("accepted");
 fclose(fac);
 fclose(fck);*/
    return 0;
}

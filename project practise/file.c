#include <stdio.h>
int main()
{
    FILE *fp,*fp1,*fp2;
    char a[100];
    char b[100];
    fp=fopen("file.txt","w");
    printf("Enter word:");
    scanf(" %[^\n]",&a);
    printf("Enter meaning:");
    scanf(" %[^\n]",&b);
    fprintf(fp,"%s = %s",a,b);
    fclose(fp);

    fp1=fopen("file.txt","r");
    if(fp1==NULL)
        printf("file not found");
    fp2=fopen("file2.txt","w");
    fscanf(fp1," %[^\n]",&a);
    fscanf(fp1," %[^\n]",&b);
    fprintf(fp2,"%s",a);
    //fprintf(fp2,"%s",b);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

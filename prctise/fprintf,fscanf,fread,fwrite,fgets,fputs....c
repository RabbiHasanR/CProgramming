#include <stdio.h>

struct my_struct
{
    char name[20];
    char sid[20];
    char address[20];
};
int main()
{
    FILE *fp;
    struct my_struct in={"Rabbi","152-35-1199","Narshingdi"};
    struct my_struct out;
    char str[100];
    char str1[100];
    //scanf(" %[^\n]",str);
    fp=fopen("Rabbi.txt","r");
    //putc(str[0],fp);
    //while(fscanf(fp," %[^\n]",str1)!=EOF)
    //{
    //str1[0]=getc(fp);
      //printf("%s",str1);
      //putchar(str1[0]);
    //}
    //fputs(str,fp);
    //fgets(str1,4,fp);
    //printf("%s",str1);
    //fwrite(&in,sizeof(in),1,fp);
    fread(&out,sizeof(in),1,fp);
    printf("%s",out.address);

    fclose(fp);
    return 0;
}

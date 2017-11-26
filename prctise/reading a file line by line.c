#include <stdio.h>
int main()
{
    FILE *fp=NULL;
    char str[100];
    //scanf(" %[^\n]",&str);
    fp=fopen("data.txt","r");
    if(fp!=NULL)
    {
        printf("File opened sucsesfully\n");
    }
    else
    {
       printf("File does not open\n");
       exit(-1);
    }
    char c=0;
    while(c=fgetc(fp)!=EOF)
    {
        putchar(c);
    }
    fseek(fp,0,SEEK_SET);
    char line[100]={0};
    while(fgets(line,sizeof(line),fp)!=NULL)
    {
        printf("%s",line);
    }

    //fprintf(fp,"%s\n",str);
    fclose(fp);
    return 0;
}

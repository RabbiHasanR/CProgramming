
#include <stdio.h>
#include <string.h>

char add_word(char p[100][20],char q[100][20]);
char search_word(char st[20],char st1[20]);
///call function in main functio///
int main()
{
    char word[20],mean[20],p[20],q[20];
    int j,n;
    while(1)
    {
        printf("\n\t.....DICTIONARY......\n");
        printf("\n\t1.Add word\n");
        printf("\n\t2.Search word\n");
        printf("\n\t3.Show dictionary\n");
        printf("\n\t0.Exit\n");
        printf("\n\tEnter choice:");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            add_word(word,mean);
            break;

        case 2:
            printf("\n search word: ");
           search_word(p,q);

            break;
        case 3:
            printf("display dictionary\n");
            break;
        case 0:
            exit(0);
                break;
        default :
            printf("\nwrong choice");
        }
    }
    return 0;
}
///add word in file///
char add_word(char p[100][20],char q[100][20])
{

    //char x[100][20],y[100][20];
    FILE *fp;
 int i=0;
 printf("If you stop adding word press RABBI or rabbi:");
 fp=fopen("newfile1.txt","a");
 for(;;)
 {
     printf("Enter word%d:",i);
     scanf(" %[^\n]",&p[i]);

     printf("Enter meaning:");
     scanf(" %[^\n]",&q[i]);
     if(p[i]=='RABBI'||p[i]=='rabbi')
        break;
        else
            i++;




      fprintf(fp,"%s = %s\n",p[i],q[i]);
 }

 fclose(fp);
 return(p,q);
}
char search_word(char st[20],char st1[20])
{
    char n[20];

    FILE *fp1,*fp2;
    fp1=fopen("newfile1.txt","r");
    fp2=fopen("newfile2.txt","w");
    printf("Enter word:");
    scanf("%s",&n);
    int j=0;
    for(j=0;j!=10;j++)
    {

        fscanf(fp2,"%s%s",add_word(st,st1));
        if(n==st[j])
        {
          printf("",st[j],st1[j]);
          break;
        }
       fprintf(fp1,"%s%s",add_word(st,st1));

    }
    fclose(fp1);
    fclose(fp2);

    return(st,st1);
}




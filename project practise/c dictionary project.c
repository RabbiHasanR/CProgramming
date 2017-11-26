
#include <stdio.h>
#include <string.h>

char add_word(char x[2][20]);
char search_word(char y[20]);
void display(char z[2][20]);
///call function in main functio///
int main()
{
    char word[2][20],show[2][20],search_word[20];
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
            add_word(word);
            break;

        case 2:
            printf("\nEnter search word: ");
            scanf(" %[^\n]",&search_word);
            break;
        case 3:
            display(show);
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
char add_word(char x[2][20])
{
    FILE *fp;
 int i;
 fp=fopen("newfile1.txt","a");
 for(i=0;i<=2;i++)
 {
     printf("Enter word%d: \n",i+1);
     scanf(" %[^\n]",x[i]);
      fprintf(fp,"%s\n",x[i]);
 }

 fclose(fp);
 return(x);
}
char search_word(char y[20])
{

}
void display(char z[2][20])
{
  FILE *fp1;
    int j;
    //char y[2][20];
 fp1=fopen("newfile1.txt","r");
 //fp2=fopen("newfile2.txt","w");
 printf("show dictionary\n");
 for(j=0;j<=2;j++)
 {
 fscanf(fp1,"%s\n",z[j]);
 //fprintf(fp2,"%s\n",y[j]);
 printf("%s\n",z[j]);
 }

 fclose(fp1);
 //fclose(fp2);
 return(z);
}



#include <stdio.h>
#include <string.h>

char add_word(char x[2][20]);
char search_word(char y[20]);
void display();

int main()
{
    char word[2][20],search_word[20];
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
            for(j=0;j<=2;j++)
            {
                printf("\nEnter any word: ");
            scanf(" %[^\n]",&word);
            }
            break;

        case 2:
            printf("\nEnter search word: ");
            scanf(" %[^\n]",&search_word);
            break;
        case 3:
            printf("show dictionary\n");
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

char add_word(char x[2][20])
{
    FILE *fp;
 int i;
 fp=fopen("newfile.txt","w");
 for(i=0;i<=2;i++)
 {
     printf("\Enter word%d: ",i+1);
     scanf(" %[^\n]",x[i]);
     fprintf(fp,"%s",x[i]);
 }
 fclose(fp);
 return(x);
}
char search_word(char y[20])
{

}
void display()
{

}

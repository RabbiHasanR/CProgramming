
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

///diclear function///

char add_word(char x[],char y[]);
char search_word(char line3[]);
char display(char line2[]);
///call function in main function///
int main()
{
    char word[100],mean[100],k[100],l[100];
    int n,f;
    while(1)
    {
        printf("\n\t\t\t......DICTIONARY.......\n");
        printf("\n\t\t\t\t1.Add word\n");
        printf("\n\t\t\t\t2.Search word\n");
        printf("\n\t\t\t\t3.Show dictionary\n");
        printf("\n\t\t\t\t0.Exit\n");
        printf("\n\tEnter choice:");
        scanf(" %d",&n);
   switch(n)
          {
        case 1:
            add_word(word,mean);


            break;

        case 2:
            printf("enter search word:");
            scanf(" %[^\n]",&k);
            printf("you enter: %s\n",k);
           search_word(k);
             printf("\nRETURN MAIN MENU PRESS 00:");
               scanf("%d",&f);
              if(f==00)
              {
                system("cls");
               }
            break;
        case 3:
              display(l);
                printf("\nRETURN MAIN MENU PRESS 00:");
               scanf("%d",&f);
              if(f==00)
              {
                system("cls");
               }
            break;
        case 0:
            exit(0);
                break;
        default :
            system("cls");
            printf("plese try again");
            //system("cls");

          }

    }
    return 0;
}
///add word in file///
char add_word(char x[],char y[])
{
    FILE *fp,*fp1;
    char a[100],b[100];
 fp=fopen("addfile1.txt","a+");
 printf("Enter word & stop press ^Z: ");
 while(scanf("%s",a)!=EOF)
 {
     //if(a=='^Z')
        //system("cls");
     printf("Enter meaning:");
     scanf(" %[^\n]",b);
      fprintf(fp,"%s = %s\n",a,b);
      printf("Enter word & stop press ^Z:");

 }



 fclose(fp);
 //return(x,y);

}

///search word in file///
char search_word(char line3[])
{

  FILE *fp1=NULL;
  char line1[100];
  int flag=0;
  //char line2[100],*ret;
  fp1=fopen("addfile1.txt","r+");
  if(fp1==NULL)
  {
    printf("File doesn't open successfully.\n");
  }

  while(!feof(fp1))
  {
    fgets(line1,99,fp1);
    //if(stricmp(line1,line3,strlen(line3))==0)
    if(strstr(line1,line3)!=NULL)
    {
      printf("found:%s\n",line1);
    flag=1;
    }

  }
  if(flag==0)
    printf("not found\n");



  fclose(fp1);


}
///show dictionary in file///
char display(char line2[])
{

  FILE *fp2=NULL;
  char line4[100];
  fp2=fopen("addfile1.txt","r+");
  if(fp2==NULL)
  {
    printf("File doesn't open successfully.\n");
  }


  printf("\n\t\t\t.....SHOW DICTIONARY.....\n");
  while(!feof(fp2))
  {
      fgets(line4,100,fp2);
      printf("%s\n",line4);
  }

  fclose(fp2);
}



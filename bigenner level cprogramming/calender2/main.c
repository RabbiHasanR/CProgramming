#include<stdio.h>

int main(){
int year;
int month, day;

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

char *months[]=
{
" ",
"               January",
"               February",
"               March",
"               April",
"               May",
"               June",
"               July",
"               August",
"               September",
"               October",
"               November",
"               December"
};




printf("Please enter a month and year: ");
scanf("%d %d", &month, &year);


if(((year%4==0) && (year%100!=0)) || (year%400==0))
{
    days_in_month[2] = 29;

}
else
{
    days_in_month[2] = 28;

}




    printf("%s", months[month]);
    printf("\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );


    for ( day = 1; day <= 1; day++ )
    {
        printf(" ");
    }


    for ( day = 1; day <= days_in_month[month]; day++ )
    {
        printf("%2d", day );


        if ( ( day ) % 7 > 0 ){
            printf("   " );
        }
        else{
            printf("\n " );
    }
    }
return 0;
}

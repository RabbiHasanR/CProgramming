#include <stdio.h>
#define num_row 7
#define num_colum 5

int main()
{
    int a[num_row][num_colum];
    int row,colum;
    for(row=0;row<num_row;row++)
    {
        for(colum=0;colum<num_colum;colum++)
        {
          a[row][colum]=colum+(row*num_colum);
        }
    }

    for(row=0;row<num_row;row++)
    {
        for(colum=0;colum<num_colum;colum++)
        {
          printf("%4d",a[row][colum]);
        }
        printf("\n");
    }

    return 0;

}

#include <stdio.h>

#define MAX 10

int main()
{
    char grid[MAX][MAX];
    int i,j,row,col;

    printf("Please enter your grid size: ");
    scanf("%d %d", &row, &col);


    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            grid[i][j] = '.';
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

const int num_rows = 7;
const int num_columns = 5;

int
main()
{
  int box[num_rows][num_columns];
  int row, column;

  for(row = 0; row < num_rows; row++)
    for(column = 0; column < num_columns; column++)
      box[row][column] = column + (row * num_columns);

  for(row = 0; row < num_rows; row++)
    {
      for(column = 0; column < num_columns; column++)
        {
          printf("%4d", box[row][column]);
        }
      printf("\n");
    }

    printf("\nbox[4][2]:%d",box[4][2]);
  return 0;
}

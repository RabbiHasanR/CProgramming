#include <stdio.h>
#include <stdlib.h>

void draw_perallel(void);
void draw_base(void);
void draw_rectangle(void);
int main()
{
    draw_rectangle();

    return 0;
}
void draw_base(void)
{
    printf("---------\n");
}
void draw_perallel(void)
{
    printf("|       | \n");
    printf("|       | \n");
    printf("|       | \n");
    printf("|       | \n");
    printf("|       | \n");

}
void draw_rectangle(void)
{
    draw_base();
    draw_perallel();
    draw_base();
}

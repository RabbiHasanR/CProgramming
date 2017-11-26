#include<stdio.h>

int main()
{

}
union a
    {
        int i;
        char ch[2];
    };
    union a z1 = {512};
    union a z2 = {0, 2};
    return 0;

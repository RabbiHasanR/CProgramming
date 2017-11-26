#include <stdio.h>



int get_max(const int list[],int n)
{
    int i,cur_large;
    cur_large=list[0];
    for(i=1;i<n;++i)
    cur_large=list[i];
    return (cur_large);
}



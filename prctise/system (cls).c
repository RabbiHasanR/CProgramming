#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

rec();

main()
{
    int a, fact;
    char q, n, y;
    printf("\nEnter any number ");
    scanf("%d", & a);
    fact = rec(a);
    printf("Factorial value = %d\n", fact);
    printf("do you want to exit.....(y/n):");
    scanf("%s" ,&q);
    if (q == 'n')
    {
        system("cls");
        main();
    }
    else
        return 0;
}

rec(int x)
{
    int f;
    if (x == 1)
        return 1;
    else
        f = x * rec(x - 1);

    return f;
}

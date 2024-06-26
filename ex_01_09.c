// Test with echo -en 'a  b  c  d      e' | ./ex_01_09.o

#include <stdio.h>

int main()
{
    int prev, current;

    prev = current = -1;

    while ((current = getchar()) != EOF)
    {
        if (prev == ' ' && current == ' ')
        {
            printf("");
        }
        else
        {
            putchar(current);
        }

        prev = current;
    }

    return 0;
}

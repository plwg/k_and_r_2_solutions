#include <stdbool.h>
#include <stdio.h>

int main()
{
    const int MAXLINE = 9999;
    const int MAX = 80;

    bool to_print = false;
    int c;
    int i;
    int count = 0;
    int bound;
    char line[MAXLINE];

    while (true)
    {
        c = getchar();

        if (count < MAXLINE)
        {
            line[count] = c;
        }

        if (c != '\n' && c != EOF)
        {
            if (count == MAX - 1)
            {
                to_print = true;
            }
            count++;
        }
        else
        {
            if (to_print)
            {
                bound = count < (MAXLINE - 1) ? count : (MAXLINE - 1);
                for (i = 0; i <= bound; i++)
                {
                    putchar(line[i]);
                }
                if (line[bound] != '\n')
                {
                    putchar('\n');
                }

                if (c != EOF)
                {
                    to_print = false;
                    for (i = MAX; i <= bound; i++)
                    {
                        line[i] = 0;
                    }
                }
                else
                {
                    break;
                }
            }

            if (c == EOF)
            {
                break;
            }
            else
            {
                count = 0;
            }
        }
    }
    return 0;
}
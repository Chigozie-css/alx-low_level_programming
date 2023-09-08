#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: Always O (Success)
*/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        int i;

        for (i = 0; i < 52; i++)
        {
                putchar(alp[i]);
        }
        putchar('\n');
        return (0);
}

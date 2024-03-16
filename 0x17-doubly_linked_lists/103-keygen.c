#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - Entry point. Generates a key for a given username.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
        if (argc != 2)
        {
                fprintf(stderr, "Usage: %s <username>\n", argv[0]);
                return (EXIT_FAILURE);
        }

        char *username = argv[1];
        int len = strlen(username);

        srand(time(NULL));

        char key[7];

        key[0] = (len ^ 59) & 63;
        key[1] = ((len * 3) ^ 79) & 63;
        key[2] = ((len * 5) ^ 85) & 63;
        key[3] = find_largest_char(username, len);
        key[4] = multiply_chars(username, len);
        key[5] = generate_random_char(username);
        key[6] = '\0';

        printf("%s\n", key);

        return (EXIT_SUCCESS);
}

/**
 * find_largest_char - Finds the largest character in the username.
 *
 * @usrn: username
 * @len: length of username
 * Return: largest character found
 */
int find_largest_char(char *usrn, int len)
{
        int ch = *usrn;
        int vch = 0;

        while (vch < len)
        {
                if (ch < usrn[vch])
                        ch = usrn[vch];
                vch++;
        }

        srand(ch ^ 14);
        return ((rand() & 63));
}

/**
 * multiply_chars - Multiplies each character of the username.
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied character
 */
int multiply_chars(char *usrn, int len)
{
        int ch = 0;
        int vch = 0;

        while (vch < len)
        {
                ch = ch + usrn[vch] * usrn[vch];
                vch++;
        }

        return (((unsigned int)ch ^ 239) & 63);
}

/**
 * generate_random_char - Generates a random character based on the username.
 *
 * @usrn: username
 * Return: random character
 */
int generate_random_char(char *usrn)
{
        int ch = 0;
        int vch = 0;

        while (vch < *usrn)
        {
                ch = rand();
                vch++;
        }

        return (((unsigned int)ch ^ 229) & 63);
}

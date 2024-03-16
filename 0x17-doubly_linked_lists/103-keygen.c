#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char *username = argv[1];
    int len = strlen(username);

    srand(time(NULL));

    char key[7];
    key[0] = len ^ 59;
    key[1] = (len * 3) ^ 79;
    key[2] = (len * 5) ^ 85;
    key[3] = find_largest_char(username, len);
    key[4] = multiply_chars(username, len);
    key[5] = generate_random_char(username);

    printf("%s\n", key);

    return EXIT_SUCCESS;
}

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
	return (rand() & 63);
}

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

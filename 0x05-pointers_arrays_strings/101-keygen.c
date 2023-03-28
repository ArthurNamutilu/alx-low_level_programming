#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main()
{
	char password[PASSWORD_LENGTH + 1];
	const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % 62;
		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';
	
	printf("%s\n", password);
	
	return 0;
}


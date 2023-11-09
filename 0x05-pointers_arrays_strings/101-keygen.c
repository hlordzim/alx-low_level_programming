#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @generateRandomCharacter: Function to generate a random character 
 *  from ASCII printable range
 * @generateRandomPassword: Function to generate a random valid password
 */
char generateRandomCharacter(void)
{
	return ((char)(rand() % 94 + 32));
	}

void generateRandomPassword(int length)
{
	char password[length + 1];

	for (int i = 0; i < length; i++)
	{
		password[i] = generateRandomCharacter();
	}

		password[length] = '\0';

		printf("Generated Password: %s\n", password);
	}

}

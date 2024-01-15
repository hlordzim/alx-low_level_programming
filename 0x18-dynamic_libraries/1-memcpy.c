#include <string.h>

/**
 * _memcpy - Copies n bytes from the source memory area (src)
 *    to the destination memory area (dest).
 * @dest: Pointer to the destination memory area where
 *    the data will be copied.
 * @src: Pointer to the source memory area containing
 * the data to be copied.
 * @n: The number of bytes to copy from src to dest.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

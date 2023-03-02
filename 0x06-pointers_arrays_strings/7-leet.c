#include "main.h"
/**
 * leet - check the code for
 *@S: string
 * Return: S
 */
char *leet(char *S)
{
	char msrc[] = "AEOTLaeotl";
	char mdest[] = "4307143071";
	int i = 0;
	int mi;

	while (S[i] != '\0')
	{
	mi = 0;
		while (msrc[mi] != '\0')
		{
			if (S[i] == msrc[mi])
			{
				S[i] = mdest[mi];
				break;
			}
		mi++;
		}
	i++;
	}
	return (S);
}

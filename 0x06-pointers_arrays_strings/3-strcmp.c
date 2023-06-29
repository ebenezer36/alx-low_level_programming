#include "main.h"
/**
 * _strcmp - function comparison of strings
 * @s1: pointer
 * @s2: pointer
 * Return: m-integer
 */
int _strcmp(char *s1, char *s2)
{
	{
        int i, m;

        m = 0

                for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
                {
                        if (s1[i] != s2[i])
                {
                                m = s1[i] - s2[i];
                                break;
                }
                }
        return (m);
}

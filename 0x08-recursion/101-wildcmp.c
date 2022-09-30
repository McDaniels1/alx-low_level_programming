#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - this returns the length of a string,
 *                      while ignoring wildcard characters.
 * @str: this is the string to be measured.
 *
 * Return: length.
 */
int strlen_no_wilds(char *str)
{
	int  len = 0,  index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 * iterate_wild - checks through a string located at a wildcard
 *                   until it point to a non-wildcard character.
 * @wildstr: This checks the string to be iterated through.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - this checks if a string matches the postfix oif
 *                    another the string to be matched.
 * @postfix: The postfix.
 * @str: string to be paired
 * Return: if postfix & str are same declare a pointer to d null
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - this compres two strings, given wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may include wildcard.
 *
 * Return: If the string is identical then - 1.
 *         otherwise - 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s2 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

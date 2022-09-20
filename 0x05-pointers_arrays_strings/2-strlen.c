/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
 */

int _strlen(9cgar *s)
{
	int counter;

	for (counter =0; *s != '\0'; ++s)
		++counter;

	return (counter);
}

/**
 * print_name - prints the name using pointer to function
 * @name: Name to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}

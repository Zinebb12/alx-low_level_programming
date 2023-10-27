/**
 * get_endianness - Check the endianess
 * Return: void
 */
int get_endianness(void)
{
	int something;

	something = 2;
	if (something & 1)
	{
		return (0);
	}
	return (1);
}

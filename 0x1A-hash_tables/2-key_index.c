#include "hash_tables.h"
/**
 * key_index - function give as an index to store data
 * @key: pointer to a string
 * @size: size of the array
 * Return: return an index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2(key) % size;
	return (index);
}

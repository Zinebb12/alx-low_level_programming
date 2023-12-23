#include "hash_tables.h"
/**
 * hash_table_delete - function that delete an hash table
 * @ht: is a hash table
 * Return: the main purpose of this function is not returning any value
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *nd, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nd = ht->array[i];
			while (nd != NULL)
			{
				tmp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = tmp;
			}
		}
	}
	free(hd->array);
	free(hd);
}

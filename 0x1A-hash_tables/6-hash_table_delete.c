#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int j;
	hash_node_t *tmp, *actual;

	if (ht == NULL)
		return;
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			tmp = ht->array[j];
			while (tmp != NULL)
			{
				actual = tmp;
				tmp = tmp->next;
				free(actual->key);
				free(actual->value);
				free(actual);
			}
		}
	}
	free(ht->array);
	free(ht);
}

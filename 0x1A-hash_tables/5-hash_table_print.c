#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: Nothing, just print inside
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int b;
	hash_node_t *tmp = NULL;
	char *d = "";

	if (ht == NULL)
		return;
	printf("{");
	for (b = 0; b < ht->size; b++)
	{
		if (ht->array[b] != NULL)
		{
			tmp = ht->array[b];
			while (tmp != NULL)
			{
				printf("%s\'%s\': \'%s\'", d, tmp->key, tmp->value);
				d = ", ";
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}

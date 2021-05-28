#include "hash_tables.h"
/**
 * hash_djb2 - hash function implementing the djb2 algorithm.
 * @str: string value of the new node to insert.
 * Return: hashed value of string as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashtable = 5381;
	int c;
	while ((c = *str++))
		hashtable = ((hashtable << 5) + hashtable) + c;
	return (hashtable);
}

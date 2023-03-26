#ifndef HASH_TABLES_H
#define HASH_TABLES_H
#include <stdio.h>
#include <strinng.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct hash_node_s - node of a hash table
 * @key: the key, string
 * the key is unique in the hash table
 * @value: the thing my life is missing,
 * somehow relates to the key idk
 * @next: points to next node in the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table storage system
 * no stems or seeds here
 * @size: never had any complaints but I still dont feel adaquate...
 * OH! you meant the array
 * @array: an array
 * hash tables work like an array where each box is
 * the head of a linked list (i think)
 */
typedef struct hash_table_s
{
	unsigned long int size;
		hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
#endif

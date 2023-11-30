/**
 * hash_djb2 - Write a hash function implementing the djb2 algorithm.
 * @str: string foo generateing hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h_t;
	int x;

	h_t = 5381;
	while ((x = *str++))
	{
		h_t = ((h_t << 5) + h_t) +x; /* hash * 33 + c */
	}
	return (h_t);
}

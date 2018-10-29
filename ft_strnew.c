#include "libft.h"

char *ft_strnew(size_t size)
{
	char *str;
	str = (char *) malloc(size * sizeof(char) + 1);
	if (!str)
		return NULL;
	ft_memset(str, '\0', size + 1);
	return ((char *)str);
}
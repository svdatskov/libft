#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	char *arr;

	arr = (char *)memptr;
	while (num > 0)
	{
		arr[num - 1] = val;
		num--;
	}
	return (memptr);
}

#include "libft.h"

void *ft_memccpy (void *dst, const void *src, int c, size_t n)
{
	const char *s;
	char *d;

	s = (const char*)src;
	d = (char *)dst;
  while (n-- > 0)
    if ((*d++ = *s++) == (char) c)
      return d;
  return (NULL);
}

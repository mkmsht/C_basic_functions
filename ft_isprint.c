#include "libft.h"

int		ft_isprint(int c)
{
	return (32 <= c && c <= 126 ? 1 : 0);
}

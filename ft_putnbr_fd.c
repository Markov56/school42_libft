#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l *= -1;
	}
	if (l > 9)
		ft_putnbr_fd(l / 10, fd);
	ft_putchar_fd(l % 10 + '0', fd);
}

/*
#include <fcntl.h>

int	main()
{
	ft_putnbr_fd(165430, 1);
	return (0);
}
*/
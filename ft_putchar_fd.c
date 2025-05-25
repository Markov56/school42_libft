#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
#include <fcntl.h>
int	main()
{
	ft_putchar_fd('A', 1);
	int fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("error");
		return (1);
	}
	ft_putchar_fd('1', fd);
	close(fd);
	return (0);
}
*/
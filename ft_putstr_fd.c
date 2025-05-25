#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
int	main()
{
	char *str = "Hello, world";
	ft_putstr_fd(str, 1);
	int fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("error");
		return (1);
	}
	ft_putstr_fd(str, fd);
	close(fd);
	return (0);
}
*/
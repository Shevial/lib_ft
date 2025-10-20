#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
    {
		while (s[i])
        {
			write(fd, &s[i], 1);
            i++; 
        }
    }
}

/*int main()
{
    ft_putstr_fd("Error: sara es un pivon", 2);
    perror("Error: sara es un pivon");
    dprintf(2, "Error: sara es un pivon"); 
}*/
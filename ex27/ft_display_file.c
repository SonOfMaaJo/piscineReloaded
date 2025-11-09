/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:00:31 by vnaoussi          #+#    #+#             */
/*   Updated: 2025/11/09 01:07:00 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

void	ft_display_file(char	*file_path)
{
	int		fd;
	int		nb_read;
	char	buffer[BUFFER_SIZE];

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	nb_read = 1;
	while (nb_read > 0)
	{
		nb_read = read(fd, buffer, BUFFER_SIZE);
		if (nb_read == -1)
		{
			write(2, "Cannot read file.\n", 18);
			close(fd);
			return ;
		}
		else
			write(1, buffer, nb_read);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(av[1]);
	return (0);
}

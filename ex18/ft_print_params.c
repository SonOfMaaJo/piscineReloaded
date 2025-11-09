/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:10:11 by vnaoussi          #+#    #+#             */
/*   Updated: 2025/11/08 14:10:42 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	if (ac == 1)
		return (0);
	while (++i < ac)
	{
		while (av[i][++j] != '\0')
			ft_putchar(av[i][j]);
		ft_putchar('\n');
		j = -1;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:12:09 by vnaoussi          #+#    #+#             */
/*   Updated: 2025/11/08 17:08:59 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	ft_putchar('\n');
}

int	ft_strcomp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	if (ac == 1)
		return (0);
	while (++i < ac)
	{
		p = av[i];
		j = i;
		while (j > 0 && ft_strcomp(p, av[j - 1]) < 0)
		{
			av[j] = av[j -1];
			j--;
		}
		av[j] = p;
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
	return (0);
}

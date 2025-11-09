/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:05:09 by vnaoussi          #+#    #+#             */
/*   Updated: 2025/11/08 14:05:26 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;
	int	esq;

	if (nb <= 0)
		return (0);
	i = 0;
	esq = 2;
	while (i != esq)
	{
		i = esq;
		esq = (esq + nb / esq) / 2;
	}
	if (esq * esq == nb)
		return (esq);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:03:25 by vnaoussi          #+#    #+#             */
/*   Updated: 2025/11/08 19:41:42 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0 || nb > 12)
		return (0);
	res = 1;
	i = nb + 1;
	while (--i > 0)
		res *= i;
	return (res);
}

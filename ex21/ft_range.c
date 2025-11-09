/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:22:33 by vnaoussi          #+#    #+#             */
/*   Updated: 2025/11/08 16:34:20 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*table;
	int	len;

	if (min >= max)
		return (NULL);
	len = -1;
	table = (int *)malloc(sizeof(int) * (max - min));
	if (table != NULL)
		while (++len < max - min)
			table[len] = min + len;
	return (table);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:13:52 by vnaoussi          #+#    #+#             */
/*   Updated: 2025/11/08 14:21:18 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		l;

	l = -1;
	p = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (p != NULL)
	{
		while (src[++l])
			p[l] = src[l];
		p[l] = '\0';
	}
	return (p);
}

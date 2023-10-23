/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapima <gapima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:22:23 by gapima            #+#    #+#             */
/*   Updated: 2023/10/23 15:22:07 by gapima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	sign = 1;
	n = 0;
	while (*nptr >= 7 && *nptr <= 13 || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr)
	{
		if (!(*nptr >= 48 && *nptr <= 57))
			return (n * sign);
		n = n * 10 + (*nptr - '0');
		nptr++;
	}
	return (n * sign);
}

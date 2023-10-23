/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapima <gapima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:58:47 by gapima            #+#    #+#             */
/*   Updated: 2023/10/22 14:35:39 by gapima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*stmp;
	int		itmp;

	itmp = -1;
	stmp = s;
	while (n)
	{
		if (stmp[n - 1] == c)
			itmp = (n - 1);
		n--;
	}
	if (itmp > -1)
		return (&stmp[itmp]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:10:18 by glima             #+#    #+#             */
/*   Updated: 2023/10/19 16:26:57 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		idx;
	char const	*srctmp;
	char		*destmp;
	size_t		count;

	count = 0;
	destmp = dest;
	srctmp = src;
	idx = 0;
	while (count < n)
	{
		*destmp = *srctmp;
		destmp++;
		srctmp++;
		count++;
	}
	return (dest);
}

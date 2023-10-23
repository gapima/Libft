/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapima <gapima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:36:02 by gapima            #+#    #+#             */
/*   Updated: 2023/10/23 13:56:19 by gapima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	big_len;
	size_t	little_len;

	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (little[i] && i < len)
		i++;
	while (*big && len >= i)
	{
		if (*big == i && len >= i && big_len < little_len
			&& ft_strncmp(big, little, i) == 0)
			return ((char *)big);
		if (*big == *little && big_len >= little_len
			&& (i == 1 || ft_memcmp(big, little, i) == 0))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

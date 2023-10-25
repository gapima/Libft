/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapima </var/spool/mail/gapima>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:03:51 by gapima            #+#    #+#             */
/*   Updated: 2023/10/25 18:12:40 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == (unsigned char)c)
		{
			return (&s[len]);
		}
		len--;
	}
	if (s[len] == (unsigned char)c)
	{
		return (&s[len]);
	}
	return (NULL);
}

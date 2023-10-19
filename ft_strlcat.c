/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:35:45 by glima             #+#    #+#             */
/*   Updated: 2023/10/19 18:53:04 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	idst;
	size_t	isrc;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	idst = lendst;
	isrc = 0;
	while (size > lendst && size <= idst++)
		dst[idst + 1] = src[isrc++]; 

	return (lensrc + lendst);	
}

#include <stdio.h>
int main(void)
{
    char s1[] = "hello";
    char s2[] = "word!";
    printf("%lu\n", ft_strlcat(s1, s2, 10));
	printf("%s", s1);
    return (0);
}




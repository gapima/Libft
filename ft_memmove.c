/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:10:18 by glima             #+#    #+#             */
/*   Updated: 2023/10/18 18:59:37 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			idx;
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

#include<string.h>
#include<stdio.h>
int main()
{
	char buffer1[13] = "HELLO, WORD!";
	char buffer2[13] = "hello, word!";

	//memmove(buffer2, buffer1, 2);
	ft_memmove(buffer2, buffer1, 2);
	printf("Buffer 1 %s\n", buffer1);
	printf("Buffer 2 %s\n", buffer2);

	return 0;
}

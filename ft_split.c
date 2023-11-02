/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:37:21 by glima             #+#    #+#             */
/*   Updated: 2023/11/02 18:08:36 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			x++;
		i++;
	}
	result = malloc(sizeof(char *) * (x + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			y++;
			i++;
		}
		if (y > 0)
		{
			result[x] = malloc(y + 1);
			y = 0;
			if (result[x] == NULL)
			{
				while (y < x)
					free(result[y++]);
				free(result);
				return (NULL);
			}
			x++;
		}
		if (s[i] == '\0')
			break;
		i++;
	}
	x = 0;
	y = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{	
			result[x][y] = s[i];
			i++;
			y++;
		}
		if (y > 0)
		{
			result[x][y] = '\0';
			x++;
		}
		if (s[i] == '\0')
			break;
		i++;
		y = 0;
	}
	result[x] = NULL;
	return (result);
}

// int main()
// {
// 	char **s = ft_split("ab  de  fg  ewr  t", ' ');
// 	int x = 0;
// 	while (s[x])
// 	{
// 		printf("%s\n",s[x]);
// 		x++;
// 	}
// 	return 0;
// }
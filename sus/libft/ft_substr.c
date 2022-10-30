/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:51:14 by otchekai          #+#    #+#             */
/*   Updated: 2022/10/30 10:01:25 by otchekai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (s)
	{
		i = ft_strlen(s);
		j = 0;
		if (len > i)
			len = i;
		ptr = malloc(len + 1);
		if (!ptr)
			return (NULL);
		while (s[start] != '\0' && j < len && start < i)
		{
			ptr[j] = s[start];
			start++;
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	return (NULL);
}

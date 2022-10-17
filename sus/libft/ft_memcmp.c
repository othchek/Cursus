/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:04:47 by otchekai          #+#    #+#             */
/*   Updated: 2022/10/17 15:47:38 by otchekai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char *str;
	char *strr;
	
	i = 0;
	str = (char *)s1;
	strr = (char *)s2;		
	while (i < n)
	{
		if(str[i] - strr[i] < 0)
			return((unsigned char)str[i] - (unsigned char)strr[i]);
		else if(str[i] - strr[i] > 0)
			return((unsigned char)str[i] - (unsigned char)strr[i]);
		i++;
	}
	return (0);
}

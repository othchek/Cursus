/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:55:47 by otchekai          #+#    #+#             */
/*   Updated: 2022/10/10 10:20:34 by otchekai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0' && i < n))
	{
		if (s1[i] - s2[i] > 0)
			return (s1[i] - s2[i]);
		else if (s1[i] - s2[i] < 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

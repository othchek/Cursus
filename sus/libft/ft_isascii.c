/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:04:28 by otchekai          #+#    #+#             */
/*   Updated: 2022/10/10 07:16:46 by otchekai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:33:34 by otchekai          #+#    #+#             */
/*   Updated: 2022/11/26 17:34:50 by otchekai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	read(int fd, char *str)
{
	int i;
	char *ptr;

	i = 1;
	ptr = malloc(BUFFSIZE * sizeof(char));
	if (!ptr)
		return (NULL);
	while(i > 0 &&)
	{
		
}


// char *get_next_line(int fd)
// {

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:35 by otchekai          #+#    #+#             */
/*   Updated: 2023/01/04 16:34:14 by otchekai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	receive_message(int sig_id)
{
	(void)sig_id;
}

void	send_character(int pid, unsigned char c)
{
	int	shifter;

	shifter = 128;
	while (shifter)
	{
		if (c & shifter)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		pause();
		usleep(100);
		shifter >>= 1;
	}
}

static void	send_message(int pid, char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		send_character(pid, str[index]);
		index++;
	}
	send_character(pid, '\n');
	send_character(pid, '\0');
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac != 3)
	{	
		ft_putstr_fd("Invalid argument: ./client <pid> (message)\n", 1);
		exit(0);
	}
	pid = ft_atoi(av[1]);
	signal(SIGUSR2, receive_message);
	send_message(pid, av[2]);
	return (0);
}

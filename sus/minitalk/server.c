/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchekai <otchekai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:59:38 by otchekai          #+#    #+#             */
/*   Updated: 2023/01/04 11:42:21 by otchekai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_print_pid(int pid)
{
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
}

static void  ft_catch_signal(int sig_id, siginfo_t *info, void *context)
{
	static unsigned char	c;
	static int				i;

	(void) context;
	i += 1;
	c |= sig_id == SIGUSR2;
	if (i < 8)
		c <<= 1;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
	}
	usleep(200);
	kill(info->si_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = ft_catch_signal;
	ft_print_pid(getpid());
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
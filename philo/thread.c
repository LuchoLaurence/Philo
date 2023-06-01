/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:41:01 by llaurenc          #+#    #+#             */
/*   Updated: 2023/05/17 13:41:01 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*p_thread(void *data)
{
	int		i;
	t_philo	*ph;

	i = 0;
	ph = (t_philo *)data;
	if (ph->id % 2)
		sleep(1);
	//ft_usleep(ph->p_args->eat_time / 10);
	while (check_death(ph))
	{
		ft_doing(ph);
	}
	return (NULL);
}

int	init_threading(t_p *p)
{
	int	i;

	i = 0;
	while (i < p->args.number)
	{
		if (pthread_create(&(p->ph[i].thread_id), NULL, p_thread, &p->ph[i]))
			ft_exit("pthread ne retourne pas 0\n");
		i++;
	}
	i = 0;
	while (i++ < p->args.number)
		pthread_join(p->ph[i].thread_id, NULL);
	printf("end threading\n");
	return (0);
}

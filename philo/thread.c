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

void	*thread(void *data)
{
    t_philo	*ph;
	ph = (t_philo *)data;
	while(!check_death)
	{
		ph->ms_eat = gettimeofday();
	}
    return (NULL);
}
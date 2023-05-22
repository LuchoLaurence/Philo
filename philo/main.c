/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:07:35 by llaurenc          #+#    #+#             */
/*   Updated: 2023/05/15 15:46:29 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void ft_exit(char *str)
{
	printf("Erreur :\n");
	printf("%s", str);
	exit(1);
}

int main(int argc, char **argv)
{
	t_p	p;
	if (!(check_args(argc, argv, &p)))
		ft_exit("Arguments invalides");
	p.ph = malloc(sizeof(t_philo) * p.args.number);
	if (!p.ph)
		ft_exit("Malloc returned NULL");
	if (!(init(&p)))
		return (1);
	return (0);
}
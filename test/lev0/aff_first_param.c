/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 00:29:00 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/30 17:27:48 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 1)
	while (*av[1])
	{
		write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}	

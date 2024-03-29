/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 03:57:23 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/27 04:00:51 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;
	int		sqr;

	sqr = 0;
	i = 1;
	while (i <= nb / 2)
	{
		sqr = i * i;
		if (sqr == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

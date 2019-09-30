/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:45:30 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/26 22:44:36 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		x;
	int		y;
	int		i;
	char	tmp;

	i = 0;
	x = 0;
	while (str[i] != '\0')
		i++;
	y = i - 1;
	while (x < y)
	{
		tmp = str[x];
		str[x] = str[y];
		str[y] = tmp;
		x++;
		y--;
	}
	return (str);
}
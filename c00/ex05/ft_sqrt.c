/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:42:16 by haarab            #+#    #+#             */
/*   Updated: 2022/05/31 13:23:51 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;
	i = 2;
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n > 2)
	{
		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

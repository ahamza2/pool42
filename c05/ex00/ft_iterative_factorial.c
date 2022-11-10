/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:19:42 by haarab            #+#    #+#             */
/*   Updated: 2022/05/30 12:25:08 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	ft;

	ft = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		ft = ft * nb;
		nb--;
	}
	return (ft);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:26:03 by haarab            #+#    #+#             */
/*   Updated: 2022/05/31 12:44:37 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ft;

	ft = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		ft = ft * (nb * ft_recursive_factorial(nb - 1));
	}
	return (ft);
}

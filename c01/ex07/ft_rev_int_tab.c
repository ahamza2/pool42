/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:44:52 by haarab            #+#    #+#             */
/*   Updated: 2022/11/11 00:17:36 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sw;

	i = 0;
	j = size -1;
	while (i < j)
	{
		sw = tab[i];
		tab[i] = tab[j];
		tab[j] = sw;
		i++;
		j--;
	}
}

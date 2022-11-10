/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:54:43 by haarab            #+#    #+#             */
/*   Updated: 2022/11/11 00:18:11 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	while (i < size - 1)
	{
		j + i + 1;
		while (j < size)
		{
			if (tab[i] > tab [j])
			{
				s = tab[j];
				{
					s = tab[i];
					tab[i] = tab[j];
					tab[j] = s;
				}
				j++;
			}
			i++;
		}
	}
}

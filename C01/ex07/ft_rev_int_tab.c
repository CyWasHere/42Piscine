/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 16:05:02 by dvaz              #+#    #+#             */
/*   Updated: 2026/07/31 12:32:06 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;
	int	temp;

	i = 0;
	e = size -1;
	if (!tab)
		return ;
	while (i < e)
	{
		temp = tab[i];
		tab[i] = tab[e];
		tab[e] = temp;
		i++;
		e--;
	}
}
/*
int main()
{
	int tab[] = {1, 2, 4, 5, 6, 8, 9};
	ft_rev_int_tab(tab, 7);
	write(1, &(char){tab[0] + '0'}, 1);
	write(1, &(char){tab[6] + '0'}, 1);
	return (0);
}
*/
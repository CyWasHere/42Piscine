/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:26:47 by dvaz              #+#    #+#             */
/*   Updated: 2026/07/31 10:58:56 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = (*a / *b);
	*b = (c % *b);
}
/*
int main(void)
{
	int a = 50;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);

	int a1 = (a / 10) + '0';
	int a2 = (a % 10) + '0';
	int b1 = (b / 10) + '0';
	int b2 = (b % 10) + '0';

	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	return (0);
}
*/
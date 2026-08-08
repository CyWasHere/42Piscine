/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:13:35 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/06 17:48:00 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return(res);
}

int main(void)
{
	printf("5 to the power of 5 = %d\n", ft_iterative_power(5, 5));
	return (0);
}

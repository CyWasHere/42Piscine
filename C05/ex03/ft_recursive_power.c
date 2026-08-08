/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:57:51 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/06 18:06:15 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return(nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	printf("5 power of 5 = %d\n", ft_recursive_power(5, 5));
	return(0);
}

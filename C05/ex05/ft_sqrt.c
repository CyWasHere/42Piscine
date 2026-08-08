/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 19:36:44 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/08 13:33:09 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("sqrt(0) = %d\n", ft_sqrt(0));
	printf("sqrt(1) = %d\n", ft_sqrt(1));
	printf("sqrt(4) = %d\n", ft_sqrt(4));
	printf("sqrt(12) = %d\n", ft_sqrt(12));
	printf("sqrt(25) = %d\n", ft_sqrt(25));
	printf("sqrt(144) = %d\n", ft_sqrt(144));
	printf("sqrt(-6) = %d\n", ft_sqrt(-6));
	return (0);
}

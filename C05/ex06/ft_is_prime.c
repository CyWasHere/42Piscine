/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 13:34:24 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/08 13:40:06 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	printf("-4 --> %d\n", ft_is_prime(-4));
	printf("0 --> %d\n", ft_is_prime(0));
	printf("1 --> %d\n", ft_is_prime(1));
	printf("2 --> %d\n", ft_is_prime(2));
	printf("3 --> %d\n", ft_is_prime(3));
	printf("4 --> %d\n", ft_is_prime(4));
	printf("5 --> %d\n", ft_is_prime(5));
	printf("15 --> %d\n", ft_is_prime(15));
	printf("23 --> %d\n", ft_is_prime(23));
	return (0);
}
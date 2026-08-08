/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 13:44:17 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/08 16:55:27 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		nb = 2;
	while(1)
	{
		i = 2;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				break;
			i++;
		}
		if (i * i > nb)
			return(nb);
		nb++;
	}
}

int main(void)
{
	printf("Next prime after -5 --> %d\n", ft_find_next_prime(-5));
	printf("Next prime after 0 --> %d\n", ft_find_next_prime(0));
	printf("Next prime after 1 --> %d\n", ft_find_next_prime(1));
	printf("Next prime after 2 --> %d\n", ft_find_next_prime(2));
	printf("Next prime after 3 --> %d\n", ft_find_next_prime(3));
	printf("Next prime after 4 --> %d\n", ft_find_next_prime(4));
	printf("Next prime after 5 --> %d\n", ft_find_next_prime(5));
	printf("Next prime after 15 --> %d\n", ft_find_next_prime(15));
	printf("Next prime after 23 --> %d\n", ft_find_next_prime(23));
	return (0);
}

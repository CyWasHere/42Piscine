/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 19:19:31 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/06 13:40:19 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	i = 1;
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

int main(void)
{
	printf("5! = %d\n", ft_iterative_factorial(5));
	printf("4! = %d\n", ft_iterative_factorial(4));
	printf("3! = %d\n", ft_iterative_factorial(3));
	printf("0! = %d\n", ft_iterative_factorial(0));
	printf("-2! = %d\n", ft_iterative_factorial(-2));
	return (0);
}

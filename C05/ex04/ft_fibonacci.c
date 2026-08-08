/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:27:17 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/06 18:55:33 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return(-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return(1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
	printf("fib(-1) = %d\n", ft_fibonacci(-1));
	printf("fib(0) = %d\n", ft_fibonacci(0));
	printf("fib(1) = %d\n", ft_fibonacci(1));
	printf("fib(2) = %d\n", ft_fibonacci(2));
	printf("fib(3) = %d\n", ft_fibonacci(3));
	printf("fib(4) = %d\n", ft_fibonacci(4));
	printf("fib(5) = %d\n", ft_fibonacci(5));
	printf("fib(6) = %d\n", ft_fibonacci(6));
	printf("fib(7) = %d\n", ft_fibonacci(7));
	printf("fib(8) = %d\n", ft_fibonacci(8));
	printf("fib(9) = %d\n", ft_fibonacci(9));
	return (0);
}

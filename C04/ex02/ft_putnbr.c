/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:10:30 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/05 14:22:24 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;
	char c;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if ( 0 <= n && n <= 9)
	{
		c = (n + '0');
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int main(void)
{
	ft_putnbr(8);
	write(1, "\n", 1);
	ft_putnbr(-758);
	write(1, "\n", 1);
	ft_putnbr(9125);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(2548763);
	return (0);
}

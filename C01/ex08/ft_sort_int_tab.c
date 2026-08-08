/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:35:40 by dvaz              #+#    #+#             */
/*   Updated: 2026/07/31 12:32:17 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
/*
//Let us ignore the insanity tht goes through my sleep deprived brain pls...
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		return;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	int	tab[] = {42, 7, 19, 3, 25, 1, 10, 8};
	int	size;
	int	i;

	size = sizeof(tab) / sizeof(tab[0]);
	ft_putstr("Before sorting:\n");
	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	ft_sort_int_tab(tab, size);
	ft_putstr("After sorting:\n");
	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:17:27 by dvaz              #+#    #+#             */
/*   Updated: 2026/07/28 15:27:54 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		write (1, &num, 1);
		num ++;
	}
}
/*
int main (void)
{
	ft_print_numbers();
	return 0;
}
*/
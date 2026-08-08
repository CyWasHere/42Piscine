/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:01:55 by dvaz              #+#    #+#             */
/*   Updated: 2026/07/31 12:28:47 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return ;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	ft_putstr("Please end my dumbass.");
	return 0;
}
*/
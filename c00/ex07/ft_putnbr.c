/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjo <mjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:07:26 by mjo               #+#    #+#             */
/*   Updated: 2020/07/09 13:08:23 by mjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char a)
{
	write(1, &a, 1);
}

int		index_num(int nb)
{
	int index;

	index = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		index++;
	}
	return (nb);
}

void	output(char arr[], int p)
{
	int i;

	i = 0;
	while (i <= p)
	{
		arr[i] = arr[i] + 48;
		print_num(arr[i]);
		i++;
	}
}

void	pm_num(int nb)
{
	int		i;
	int		p;
	char		arr[12];

	if (nb <0)
		write(1, "-", 1);
	if (nb < 0)
	{
		nb = nb * -1;
	}
	p = index_num(nb);
	i = index_num(nb);
	while (nb > 0)
	{
		arr[i] = nb % 10 + 48;
		nb = nb / 10 + 48;
		i--;
	}
	output(arr, p);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 1);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	pm_num(nb);
}

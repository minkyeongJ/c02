/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjo <mjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:41:19 by mjo               #+#    #+#             */
/*   Updated: 2020/07/09 11:06:22 by mjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char a)
{
	write(1, &a, 1);
}

void	write_num(int front, int back)
{
	print_num(front / 10 + 48);
	print_num(front % 10 + 48);
	print_num(' ');
	print_num(back / 10 + 48);
	print_num(back % 10 + 48);
	if (!(front == 98 && back == 99))
	{
		print_num(',');
		print_num(' ');
	}
}

void	ft_print_comb2(void)
{
	int front;
	int back;

	front = 0;
	while (front <= 99)
	{
		back = front + 1;
		while (back <= 99)
		{
			write_num(front, back);
			back++;
		}
		front++;
	}
}

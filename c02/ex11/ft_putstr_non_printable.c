/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 20:50:21 by mjo               #+#    #+#             */
/*   Updated: 2020/07/15 00:57:49 by mjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char get_hex(int n)
{
	if (n < 10)
		return (n + 48);
	return (n + 87);
}

void print_non_printable(unsigned char c)
{
	unsigned char asci;

	write(1, "\\", 1);
	asci = get_hex(c / 16 % 16);
	write(1, &asci, 1);
	asci = get_hex(c % 16);
	write(1, &asci, 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	if (*(str + i) >= 32 && *(str + 0) <= 126)
		write(1, &str[i], 1);
	else
		print_non_printable(*(str + i));
	i++;
}

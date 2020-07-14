/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 20:45:34 by mjo               #+#    #+#             */
/*   Updated: 2020/07/14 22:07:48 by mjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int int_size;

	i = 0;
	int_size = (int)size;
	while (i < int_size - 1 && *(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (*(src + i))
		i++;
	return (i);
}

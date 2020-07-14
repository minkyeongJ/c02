/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 20:34:07 by mjo               #+#    #+#             */
/*   Updated: 2020/07/15 01:01:20 by mjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, int i)
{
	int j;
	
	j = 0;
	if (j == 0)
		return (1);
	if (*(str = j) >= '0' && *(str + j) <= '9')
		return (0);
	if (*(str + j) >= 'A' && *(str + j) <= 'Z')
		return (0);
	if (*(str + j) >= 'a' && *(str + j) <= 'z')
		return (0);
	return (1);
}

void	change_up(char *str, int i)
{
	if (*(str + i) >= 'a' && *(str + i) <= 'z')
		*(str + i) = *(str + i) - 32;
}

void	change_low(char *str, int i)
{
	if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		*(str + i) = *(str + i) + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while(*str)
	{
		if (check_alpa(str, i))
			chage_up(str, i);
		else
			change_low(str, i);
		i++;
	}
	return(str);
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:53:18 by schennal          #+#    #+#             */
/*   Updated: 2024/06/29 13:53:21 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	(write(1, &c, 1));
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
	return (i);
}

int	ft_putnbr(long long n)
{
	int			result;
	long long	rem;

	result = 0;
	if (n < 0)
	{
		result += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		result += ft_putnbr(n / 10);
	rem = n % 10;
	result += ft_putchar(rem + 48);
	return (result);
}

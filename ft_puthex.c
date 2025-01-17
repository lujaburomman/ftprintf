/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laburomm <laburomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:51:13 by laburomm          #+#    #+#             */
/*   Updated: 2024/09/24 19:21:37 by laburomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex1(unsigned long n, int upper)
{
	int		count;
	char	*hex;

	if (!n)
		return (ft_putchar('0'));
	count = 0;
	if (upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_puthex1(n / 16, upper);
	}
	ft_putchar(hex[n % 16]);
	count += 1;
	return (count);
}

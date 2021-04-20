/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:35:00 by yesong            #+#    #+#             */
/*   Updated: 2021/03/02 16:41:31 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	make_hex(unsigned char c)
{
	unsigned int	hex1;
	unsigned int	hex2;

	hex1 = c / 16;
	hex2 = c % 16;
	write(1, "\\", 1);
	if (hex1 > 9)
		hex1 += 'a' - 10;
	else
		hex1 += '0';
	write(1, &hex1, 1);
	if (hex2 > 9)
		hex2 += 'a' - 10;
	else
		hex2 += '0';
	write(1, &hex2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while(*str)
	{
		if(!(*str >= 32 && *str <= 127))
			make_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}

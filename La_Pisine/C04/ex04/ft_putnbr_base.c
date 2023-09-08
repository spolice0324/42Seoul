/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:24:00 by yesong            #+#    #+#             */
/*   Updated: 2021/03/11 16:00:43 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	base_len(int nbr, char *base, int len)
{
	if (nbr == 0)
		return ;
	base_len(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

int		invalid_situation(char *base, int len)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	if (invalid_situation(base, i) == 0)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	else if (nbr > 0)
		base_len(nbr, base, i);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		base_len(nbr / -i, base, i);
		write(1, &base[-(nbr % i)], 1);
	}
}

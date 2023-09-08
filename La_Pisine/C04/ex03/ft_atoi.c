/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:19:14 by yesong            #+#    #+#             */
/*   Updated: 2021/03/12 11:51:00 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	ch_min;
	int	n;

	ch_min = 1;
	n = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			ch_min = ch_min * -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		n = n * 10;
		n = n + ch_min * (*str - '0');
		str++;
	}
	return (n);
}
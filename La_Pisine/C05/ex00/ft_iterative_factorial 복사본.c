/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:44:31 by yesong            #+#    #+#             */
/*   Updated: 2021/03/11 13:57:30 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;	
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fac = 1;
	while (nb)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}

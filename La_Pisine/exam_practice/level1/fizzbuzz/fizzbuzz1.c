/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:43:12 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 01:55:35 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nbr(int n)
{
	char c;
	if (n > 9)
		put_nbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}
int main(void)
{
	int n;
	
	n = 1;

	while (n <= 100)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
		write (1, "fizzbuzz", 8);
	else if (n % 3 == 0)
		write (1, "fizz", 4);
	else if (n % 5 == 0)
		write (1, "buzz", 4);
	else
		put_nbr(n);
	write(1,"\n", 1);
	++n;
	}
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:16:05 by yesong            #+#    #+#             */
/*   Updated: 2021/03/17 18:40:59 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	putnbr(int n)
{
	char c;

	if(n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}

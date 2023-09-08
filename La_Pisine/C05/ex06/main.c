/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:19:37 by yesong            #+#    #+#             */
/*   Updated: 2021/03/04 12:23:31 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <math.h>

int ft_is_prime(int nb);

int	is_prime(int prime)
{
	int	i;
	int	sq;

	if (prime <= 1)
		return (0);
	sq = (int)sqrt(prime);
	for (i = 2; (i <= sq) && (prime % i != 0); i++);
	return (i > sq);
}

int	main(void)
{
	int	number;
	int	results[2];
	int	count;

	number = 0;
	count = 0;
	while (number < 30)
	{
		results[0] = is_prime(number);
		results[1] = ft_is_prime(number);
		printf("is_prime(%d) = %d  --  %d\n", number, results[1], results[0]);
		if (results[0] != results[1])
			return (1);
		number++;
		if (results[0])
			count++;
	}
	printf("is_prime(%d) = %d\n", INT_MAX, is_prime(INT_MAX));
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}


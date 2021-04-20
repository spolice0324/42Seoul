/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:18:43 by yesong            #+#    #+#             */
/*   Updated: 2021/03/11 14:20:46 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int	main(void)
{
	int	index;

	index = -2;
	while (index < 47)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}


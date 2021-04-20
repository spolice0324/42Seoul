/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ret1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:37:10 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 01:21:12 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
		write (1, &str[i], 1);

	write(1, "\n",1);
}

int	main(void)
{
	rev_print("rainbowdash");
	write(1, "\n",1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:49:13 by yesong            #+#    #+#             */
/*   Updated: 2021/03/08 18:17:31 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int g_board[4][4];

void	print_board(void)
{
	char	c;
	int	i;
	int	j;
	
	i = 0;
	while ( i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = g_board[i][j] + '0';
			write(1, &c, 1);
			if (j == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

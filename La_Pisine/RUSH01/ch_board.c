/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_board.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:54:57 by yesong            #+#    #+#             */
/*   Updated: 2021/03/08 18:57:22 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int g_condition[16];
extern int g_board[4][4];

int	col_up(int count_see)
{
	int maximum_height;
	int eye_height;
	int ix;

	maximum_height = 0;
	eye_height = 0;
	ix = 0;
	while (ix < 4)
	{
		if (maximum_height < g_board[ix][count_see])
		{
			maximum_height = g_board[ix][count_see];
			eye_height++;
		}
		ix++;
	}
	return (eye_height);
}

int	col_down(int count_see)
{
	int maximum_height;
	int eye_height;
	int ix;

	maximum_height = 0;
	eye_height = 0;
	ix = 3;
	while (ix >= 0)
	{
		if (maximum_height < g_board[ix][count_see])
		{
			maximum_height = g_board[ix][count_see];
			eye_height++;
		}
		ix--;
	}
	return (eye_height);
}

int	row_left(int count_see)
{
	int maximum_height;
	int eye_height;
	int ix;

	maximum_height = 0;
	eye_height = 0;
	ix = 0;
	while (ix < 4)
	{
		if (maximum_height < g_board[count_see][ix])
		{
			maximum_height = g_board[count_see][ix];
			eye_height++;
		}
		ix++;
	}
	return (eye_height);
}

int	row_right(int count_see)
{
	int maximum_height;
	int eye_height;
	int ix;

	maximum_height = 0;
	eye_height = 0;
	ix = 3;
	while (ix >= 0)
	{
		if (maximum_height < g_board[count_see][ix])
		{
			maximum_height = g_board[count_see][ix];
			eye_height++;
		}
		ix--;
	}
	return (eye_height);
}

int ch_board(void)
{
	int count_see;

	count_see = 0;
	while (count_see < 4)
	{
		if (col_up(count_see) != g_condition[count_see])
			return(0);
		if (col_down(count_see) != g_condition[count_see + 4])
			return(0);
		if (row_left(count_see) != g_condition[count_see + 8])
			return(0);
		if (row_right(count_see) != g_condition[count_see + 12])
			return(0);
		count_see++;
	}
	return (1);
}

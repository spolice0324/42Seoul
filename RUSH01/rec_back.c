/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:05:39 by yesong            #+#    #+#             */
/*   Updated: 2021/03/08 18:52:19 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_board[4][4];
int	g_ch_row[4][4];
int	g_ch_col[4][4];

int	recursive(int r, int c);
int	ch_board(void);
void	print_board(void);

int	backtracking(int r, int c)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (g_ch_row[r][i] || g_ch_col[c][i])
		{
			i++;
			continue;
		}
		g_ch_row[r][i] = 1;
		g_ch_col[c][i] = 1;
		g_board[r][c] = i + 1;
		if(recursive (r, c + 1))
			return (1);
		g_ch_row[r][i] = 0;
		g_ch_col[c][i] = 0;
		g_board[r][c] = 0;
		i++;
	}
	return (0);
}

int	recursive(int r, int c)
{
	if (r == 3 && c == 4)
	{
		if (ch_board())
		{
			print_board();
			return (1);
		}
		return (0);
	}
	else if (c == 4)
		return (recursive (r+1, 0));
	else
		return (backtracking(r,c));
}

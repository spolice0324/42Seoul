/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:55:05 by yesong            #+#    #+#             */
/*   Updated: 2021/03/08 18:20:13 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_condition[16];

int space(char c)
{
	return((c >= 9 && c<= 13) || c == ' ');
}

int valid_line(char *line)
{
	int i;

	i = 0;
	while (*line)
	{
		while (*line && space(*line))
			line++;
		if (*line)
		{
			if(*line >= '1' && *line < '4')
			{
				if( i == 16 || (*(line +1) && !space(*(line + 1))))
					return (0);
				g_condition[i++] = *line - '0';
			}
			else
				return (0);
			line++;
		}
	}
	return (i == 16);
}

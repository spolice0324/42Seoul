/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 04:20:01 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 04:30:32 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main (int argc, char **argv)
{
	int len;
	int x;
	int y;

	len = 0;
	x = 0;
	y = 0;
	if (argc == 3)
	{
		while(argv[1][x] && argv[2][y])
		{
			if(argv[1][x] == argv[2][y])
				x++;
			y++;
		}
		if (argv[1][x] == '\0')
		{
			while (argv[1][len])
			write(1, &argv[1][len++], 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}

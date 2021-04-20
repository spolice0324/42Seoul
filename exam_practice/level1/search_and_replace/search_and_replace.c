/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:23:21 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 01:40:42 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			i = 0;
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	else
		write(1, "\n" , 1);
	return(0);
}

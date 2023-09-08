/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:03:26 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 02:24:07 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	space(int i)
{
	if ( i == ' ' || i == '\t' || i == '\v' || i == '\n' || i == '\f' || i == '\r')
		return(1);
	return(0);
}

int 	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
				while (space(argv[1][i]))
			i++;
		while ( !space(argv[1][i]) && argv[1][i])

			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return(0);
	
}

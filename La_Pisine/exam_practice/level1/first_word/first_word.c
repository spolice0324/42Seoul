/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 22:09:13 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 00:38:11 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int space(int i)
{
	if ( i == '\f' || i == '\n' || i == '\t' || i == '\v' || i == '\r' || i == ' ')
		return (1);
	return(0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (space(argv[1][i]))
			i++;
		while (!(space(argv[1][i])) && argv[1][i])
		
			write(1, &argv[1][i++], 1);

	}
	write(1, "\n", 1);
	return(0);
}

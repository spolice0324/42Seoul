/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:56:01 by yesong            #+#    #+#             */
/*   Updated: 2021/03/10 13:35:53 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	recursive(int r, int c);
int	valid_line(char *line);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (valid_line(argv[1]))
		{
			if (!recursive(0,0))
				write(1, "can't solve\n", 12);
		}
		else
			write(1, "errors\n", 7);
	}
	else
		write(1, "error\n", 6);

	return(0);
}

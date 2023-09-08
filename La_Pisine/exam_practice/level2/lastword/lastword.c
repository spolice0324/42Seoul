/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 21:13:32 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 06:04:05 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv);
{

	if (argc == 2)
	{
		while(*argv[i])
			argv[i]++;
		argv[i]--;
		while(space(*argv[1]))
			argv[1]--;
		while(*argv[1] && !space(*argv[1]))
			argv[1]--;
		argv[1]++;
		while (*av[1] && !ft_isblank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);

	
	}
}

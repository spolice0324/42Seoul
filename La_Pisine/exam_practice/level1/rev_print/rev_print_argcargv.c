/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_argcargv.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:05:15 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 01:17:50 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_print(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
		write(1, &str[i], 1);
}

int main(int argc, char **argv)
{ 
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	write(1, "\n", 1);

	return(0);
}

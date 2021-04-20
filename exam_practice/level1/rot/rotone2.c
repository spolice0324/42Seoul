/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:28:20 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 01:17:25 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = ((str[i] + 1) > 'z') ? (str[i] -('z' - 'a')) : (str[i] + 1);
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = ((str[i] + 1) > 'Z') ? (str[i] -('z' - 'a')) : (str[i] + 1);
			
		write(1, &str[i], 1);
		i++;
	}

}

int 	main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_rotone(argv[1]);
	}
	write(1, "\n", 1);
	return(0);

}

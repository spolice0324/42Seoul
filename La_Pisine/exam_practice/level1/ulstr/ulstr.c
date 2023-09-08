/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:14:10 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 02:23:20 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] -= 32;
	else if('A' <= str[i] && str[i] <= 'Z')
		str[i] += 32;

	write(1, &str[i], 1);
	i++;
	}


}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_ulstr(argv[1]);
	}
	else
		write(1, "\n", 1);
	return(0);
}

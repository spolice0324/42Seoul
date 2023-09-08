* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:12:37 by yesong            #+#    #+#             */
/*   Updated: 2021/03/17 12:51:05 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] + 1) > 'z') ? (str[i] - ('z' - 'a')) : (str[i]+1);
		if ( str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] + 1) > 'Z') ? (str[i] - ('z' - 'a')) : (str[i]+1);
		
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)

	{
	if (argc == 2)
	{
		rotone(argv[1]);
	}
	else
		write(1, "\n", 1);
}

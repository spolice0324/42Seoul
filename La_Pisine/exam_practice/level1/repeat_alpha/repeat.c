/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:56:38 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 02:14:17 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int reprint_cnt;
	if (argc == 2)
	{
		while (*argv[1])
		{
			i = 0;
			reprint_cnt = 1;
			if ('a' <= *argv[1] && *argv[1] <= 'z')
				reprint_cnt = *argv[1] - 'a' + 1;
			else if ('A' <= *argv[1] && *argv[1] <= 'Z')
				reprint_cnt = *argv[1] - 'A' + 1;
			while(i < reprint_cnt)
			{
				write(1, &(*argv[1]), 1);
				i++;
			}
				argv[1]++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}

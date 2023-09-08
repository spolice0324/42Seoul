/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 03:58:54 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 04:34:42 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int wdmatch(char *str1, char *str2)
{
	while (*str2)
		if (*str1 == *(str2++))
			str1++;
	if (*str1 == 0)
		return (1);
	return (0);
}
int	main(int argc, char **argv)
{
	if (argc == 3)
	{ 
		if (wdmatch(argv[1], argv[2]))
			while (*argv[1])
				write(1, argv[1]++, 1);
	}
		write(1, "\n", 1);
	return(0);
}

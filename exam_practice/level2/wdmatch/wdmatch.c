/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:22:35 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 04:21:28 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *str1, char *str2)
{
	int i;
	int len;
	
	i = 0;
	len = 0;
	while(str1[len])
		i++;
	while(i<len && str2[i])
		(str1[i] == *str2[++]) ? i++ : 0;
	if(i == len)
		write(1, str1, len);
	
}



int main(int argc, char **argv)
{

	if (argc == 3)
	{
		wdmatch(argv[1], argv[2]);

		write(1, "\n", 1);
		return(0);


	}
}

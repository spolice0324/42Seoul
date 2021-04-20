/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:12:12 by yesong            #+#    #+#             */
/*   Updated: 2021/03/11 12:17:40 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

void	div_l(int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
		printf("-");
	printf("\n");
}
	void	div_b(int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
		printf("=");
	printf("\n");
}
	int		main(void)
{
	char	dest[15];
	char	src[10];
	int		rtn;
	int		size;

	for (size=0; size < 20; size++)
	{
		div_b(80);
		strcpy(dest, "12345678901234");
		strcpy(src, "abcdefghi");
		printf("%-12s | %-15s | %-15s | %-4s || %-15s"
				,"ft_name", "dest", "src", "size", "Return");

		div_l(80);

		printf("%-12s | %-15s | %-15s | %-4d ||"
				,"strlcpy", dest, src, size);

		div_l(80);
		rtn = strlcpy(dest, src, size);
		printf("%-12s | %-15s | %-15s | %-4d || %-4d "
				,"strlcpy", dest, src, size, rtn);

		div_b(80);
	}
}

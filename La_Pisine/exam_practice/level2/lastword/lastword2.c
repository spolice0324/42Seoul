/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 04:58:56 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 05:28:03 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	space(char c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

void	last_word(char *str)
{
	int i;

	i = 0;

	while (str[i])
		++i;
	while (i>= 0 && (space(str[i]) || str[i] == '\0'))
		--i;
	while (i>= 0 && !space(str[i]))
		--i;
	++i;
	while (str[i] && !space(str[i]))
		write(1, &str[i++], 1);

}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}

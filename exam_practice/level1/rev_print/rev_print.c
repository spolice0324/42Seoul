/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:09:07 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 01:01:02 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
char    rev_print(char *str)
{
    int i = 0;
 
    while (str[i] != '\0')
        i++;
    --i;
    while (i >= 0)
    {
        write(1, str + i, 1);
        --i;
    }
	return (*str);
}
 
int     main(void)
{
    rev_print("Rainbow Dash");
    write(1, "\n", 1);
    return (0);
}

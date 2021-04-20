/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:02:17 by yesong            #+#    #+#             */
/*   Updated: 2021/03/12 12:02:22 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int             chk_pre(char *start, char *c)
{
        while (start != c)
        {
                if (*start == *c)
                        return (0);
                start++;
        }
        return (1);
}

void    inter(char *s1, char *s2)
{
        char    *s1_tmp;
        char    *s2_tmp;

        s1_tmp = s1;
        s2_tmp = s2;
        while (*s1)
        {
                s2 = s2_tmp;
                while (*s2)
                {
                        if (*s1 == *s2 && chk_pre(s1_tmp, s1))
                        {
                                write(1, s1, 1);
                                break ;
                        }
                        s2++;
                }
                s1++;
        }
}

int             main(int argc, char **argv)
{
        if (argc == 3)
                inter(argv[1], argv[2]);
        write(1, "\n", 1);
        return (0);
}

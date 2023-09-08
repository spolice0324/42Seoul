/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:44:41 by yesong            #+#    #+#             */
/*   Updated: 2021/03/17 20:45:24 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int             chk_str(char *str, char c)
{
        while (*str)
                if (*(str++) == c)
                        return (0);
        return (1);
}

int             chk_pre(char *str, char c, int i)
{
        int             j;

	j = 0;
        while (j < i)
        {
                if (str[j++] == c)
                        return (0);
        }
        return (1);
}

void    write_union(char *s1, char *s2)
{
        int             i;

	i = 0;
        while (s1[i])
        {
                if (chk_pre(s1, s1[i], i))
                        write(1, &s1[i], 1);
                i++;
        }
        i = 0;
        while (s2[i])
        {
                if (chk_pre(s2, s2[i], i))
                        if (chk_str(s1, s2[i]))
                                write(1, &s2[i], 1);
                i++;
        }
}

int             main(int argc, char **argv)
{
        if (argc == 3)
                write_union(argv[1], argv[2]);
        write(1, "\n", 1);
        return (0);

}

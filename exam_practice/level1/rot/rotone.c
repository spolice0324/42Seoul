/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 22:46:21 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 01:13:49 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
     
     int	is_upper(char c)
     {
     	return (c >= 'A' && c <= 'Z');
     }
     
     int is_lower(char c)
      {
     	return (c >= 'a' && c <= 'z');
	  }
     
     void ft_putchar(char c)
     {
     	write(1, &c, 1);
     }
     
     int	main(int argc, char **argv)
     {
     	int	i;
     
     	if (argc == 2)
     	{
     		i = 0;
     		while (argv[1][i])
     		{
     			if (is_lower(argv[1][i]))
     				ft_putchar((argv[1][i] - 'a' + 1) % 26 + 'a');
     			else if (is_upper(argv[1][i]))
     				ft_putchar((argv[1][i] - 'A' + 1) % 26 + 'A');
     			else
     				ft_putchar(argv[1][i]);
     			i++;
     		}
     	}
     	write(1, "\n", 1);
     	return (0);
     }

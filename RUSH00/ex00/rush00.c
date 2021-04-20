/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong </var/mail/yesong>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:34:38 by yesong            #+#    #+#             */
/*   Updated: 2021/02/21 18:02:26 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void rush00(int x, int y)
{
		int xc;
		int yc;

		yc = 1;
		while(yc <= y)
			   	{
					xc = 1;
					while(xc <= x)
					{
						if (( xc == 1 || xc == x) && ( yc == 1 || yc == y)) 
							ft_putchar('o');
						else if (( xc > 1 && xc < x) && (yc == 1 || yc == y))
							ft_putchar('-');
						else if (( yc > 1 && yc < y) && (xc == 1 || xc == x)) 
							ft_putchar('|');
						else
							ft_putchar(' ');
						xc++;
					}
					
		yc++;
		ft_putchar('\n');
}

}


void ft_putchar(char c);

void rush01(int x, int y)
{
	int xc;
	int yc;
		
	yc = 0;
	while(yc++ < y)
	{
		xc = 0;
		while(xc++ < x)
		{
			if(xc == 1 && yc == 1)
				ft_putchar('/');
			else if((xc != 1 && xc == x) && (yc != 1 && yc == y ))
				ft_putchar('/');
			else if((xc == 1 && yc == y) || (yc == 1 && xc == x))
				ft_putchar('\\');
			else if( xc > 1 && xc < x && yc > 1 && yc < y)
				ft_putchar(' ');
			else
				ft_putchar('*');
		}
		
		ft_putchar('\n');
	}
}

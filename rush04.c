 void	ft_putchar(char c);


void	error_msg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}  
   
void	print_first_line(int x, int col_pos)
{ 
	while (col_pos < x)
	{
		if (col_pos == 0)
			ft_putchar('A');
		else if (col_pos == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		col_pos++;
	}
	ft_putchar('\n');
}

void	print_middle_line(int x, int col_pos)
{
	while (col_pos < x)
        {
		if (col_pos == 0 || col_pos == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
                col_pos++;
        }
	ft_putchar('\n');
}

void	print_last_line(int x, int col_pos)
{
	while (col_pos < x)
        {
		if (col_pos == 0)
			ft_putchar('C');
		else if (col_pos == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
                col_pos++;
        }
}

void	rush04(int x, int y)
{
	int	row_pos;
	int	col_pos;

	if (x <= 0 || y <= 0)
	{
		error_msg("Invalid input!Try again.");
	     return;
	}
	row_pos = 0;
	col_pos = 0;
	while (row_pos < y)
	{
		if (row_pos == 0)
			print_first_line(x, col_pos);
		else if (row_pos == y - 1)
			print_last_line(x, col_pos);
		else
			print_middle_line(x, col_pos);
		row_pos++;
	}
}

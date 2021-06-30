#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_print
{
	va_list		args;
	int			wdt;
	int			prc;
	int			zero;
	int			pnt;
	int			dash;
	int			tl;
	int			sign;
	int			is_zero;
	int			perc;
	int			sp;
}				t_print;


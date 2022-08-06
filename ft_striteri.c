#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

    x = 0;
	if (!s || !f)
		return ;
	while (s[x])
	{
		f(x, s + x);
		x++;
	}
}

/*
Applies the function f on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to 'f' to be modified if necessary.
*/
/*
        My interpret
        applied f to each char of the str 
        and pass by f that will modified it 
        and then x++
        ***My easy interpret***
        -> make  
*/
/*
    line 8 -> check null
    line 9 -> return void  (return nothing just end th program)
*/
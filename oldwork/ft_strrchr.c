/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 03:26:30 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/24 03:34:30 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lenght(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	c2;
	int		x;

	str = (char *) s;
	c2 = (char)c;
	x = lenght(str);
	while (x >= 0)
	{
		if (str[x] == c2)
			return (&str[x]);
		x--;
	}
	str = 0;
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
/*
    strrchr is identical to strchr but it locate the last occurence of c
*/
// line 31 32 -> convert s and c to char and char * to compare and return them
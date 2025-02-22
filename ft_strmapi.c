/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:25:42 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:57:57 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	char			*newstring;
	unsigned int	i;

	i = 0;
	newstring = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (newstring == NULL)
		return (newstring);
	while (s[i] != '\0')
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
// char	maft(unsigned int i, char c)
// {
// 	if (i >= 0)
// 	{
// 		c = c + 32;
// 	}
// 	return (c);
// }

// #include <stdio.h>
// int main (void)
// {
// 	char *str = "HELLO";
// 	printf("%s = ma string \n\n %s = ma string apres ma fonction", str, ft_strmapi(str, &maft));
// }

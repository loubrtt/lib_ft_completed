/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:20:44 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:52:55 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void iter(unsigned int i, char * s) 
// {
// 	*s += i;
// }

// #include <stdio.h>
// int main (void)
// {
// 	char s[] = "0000000000";

// 	printf("Avant la fonction = %s\n ", s);
// 	ft_striteri(s, iter);
// 	printf("Apres la fonction = %s", s);
// }
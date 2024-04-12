/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/12 20:45:00 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <bsd/string.h>
#include <ctype.h>

int	main(int ac, char *av[])
{
	(void) ac;
	(void) av;
	const char	*s1 = "Foo Bar Baz";
	const char	*s2 = "Bar";
	char	*p;
	char	*p2;

	p = strnstr(s1, s2, 8);
	p2 = ft_strnstr(s1, s2, 8);
	
	printf("%s\n", p);
	printf("%s\n", p2);
	return (0);
}

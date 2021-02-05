/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 07:51:54 by sdummett          #+#    #+#             */
/*   Updated: 2021/02/05 08:19:15 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
			dest[i + 1] = '\0';
		i++;
	}
	return(dest);	
}

int main()
{
	char str[] = "jsdhf342iu234234";
	char dest[] = "";

	printf("Before calling function, str = %s, dest = %s\n", str, dest);
	printf("strcpy:%s\n", ft_strcpy(dest, str));
	printf("After calling function, str = %s, dest = %s\n", str, dest);
	return(0);
}
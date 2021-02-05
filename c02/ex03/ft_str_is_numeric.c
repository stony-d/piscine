/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 08:52:21 by sdummett          #+#    #+#             */
/*   Updated: 2021/02/05 16:50:48 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	if (str[i] == '\0')
		return(1)
	while (str[i] != '\0')
	{
		if(str[i] < '0' || str[i] > '9')
			return(0)
		i++;
	}
	return(1);
}
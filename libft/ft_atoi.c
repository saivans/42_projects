/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:39:16 by stagma            #+#    #+#             */
/*   Updated: 2025/10/27 18:31:28 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_flag(unsigned long int nb, int sign, int digit)
{
	if (sign == 1)
	{
		if (nb > (9223372036854775807ULL - digit) / 10)
			return (1);
	}
	else 
	{
		if (nb > (9223372036854775808ULL - digit) / 10)
			return (2);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	nbr;

	i = 0 ;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1 ;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	nbr = 0 ;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ft_flag(nbr, sign, str[i] - '0') == 1)
			return (-1);
		else if (ft_flag(nbr, sign, str[i] - '0') == 2)
			return (0);
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}

// int	main()
// {
// 	printf("%d\n", ft_atoi("-9223372036854775802999"));
// 	printf("%d\n", atoi("-9223372036854775802999"));
// }
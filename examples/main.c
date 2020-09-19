/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 02:08:33 by ciglesia          #+#    #+#             */
/*   Updated: 2020/09/02 02:33:58 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
** aunque el comentario sea una linea, asi se hace. (solofuera de las funciones)
*/

/*
** ac == cantidad de parametros pasados al ejecutable
** av == parametros (es un array de strings)
** av[0] == nombre del ejecutable
*/

int main(int ac, char **av)
{
	char str[11] = "HOLA PAPA\n";

	str[10] = '\0';
	ft_putstr(str);
	ft_putstr(":)");
	if (ac > 1)
		ft_putstr(av[1]);
	return (0);
}

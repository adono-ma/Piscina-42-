/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:03:37 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/19 20:25:06 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int matrizgen()
{	
    int matriz[4][4]
	{
		primera_combinacion(matriz[0]);
		
			while(haya_mas_combinaciones(matriz[0]))
			{	
				primera_combinacion(matriz[1]);
				while(haya_mas_combinaciones(matriz[1]))
				{
					primera_combinacion(matriz[2]);
					while(haya_mas_combinaciones(matriz[2]))
					{
						primera_combinacion(matriz[3]);
						while(haya_mas_combinaciones(matriz[3]))
						{
							/* to do */
							if (comprobar_matriz(matriz(matriz, numeros)))
							printf("%d %d %d %dn" matriz[0][0], matriz[0] [1],matriz[0][2], matriz[0][3]);

						siguiente_combinacion(matriz[3]);
						}
					siguiente_combinacion(matriz[2]);
					}
				siguiente_combinacion(matriz[1]);
				}
				siguiente_combinacion(matriz[0]);
				}
		return (0);	
		}
}
 int	main(int	argc,	char **argv)
{
/* Argv pasa tantos parametros coomo argc le diga, si dice argc 1, argv pasa 1. Como minimo pasa 1 que es el nombre dle programa pero como van a pasarnos el array de numeros 16, serian dos. 
   por eso si argc es menos de 2 tiene que escribir error.
   Luego ya Declaramos la matriz de numeros que recibimos de 4 filas y 4 columnas. Llamamos a la funcion de primera combinacion en la fila y hacemos bucle con la funcion haya mas combinaciones */
	if (argc < 2)
	{
		write(1, "Error", 5);
		return (0);
	}

	int numeros[16]
	{
		rush_read_numbers_in_parameter(argv[1], numeros);
	}
	
    int matrizgen();
}
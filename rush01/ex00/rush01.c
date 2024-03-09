/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:24:17 by adono-ma          #+#    #+#             */
/*   Updated: 2023/11/19 20:53:56 by adono-ma         ###   ########.fr       */
/*   Updated: 2023/11/19 13:38:46 by snunez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void rush_read_numbers_in_parameter(char *parameter, int *numbers) {
    int number_index = 0;
    int param_index = 0;
    while (parameter[param_index] != 0) {
        char ch = parameter[param_index];
        if (ch >= '1' && ch <= '4') {
            numbers[number_index] = ch - '0';
            number_index++;
        }
        param_index++;
    }
}

int hay_repetidos(int a, int b, int c, int d) {
    if (a != b && a != c && a != d && b != c && b != d && c != d) {
        return 0;
    }
    return 1;
}

int comprobar_extremos(int a, int b, int c, int d, int drcho, int izq);

int comprobar_matriz(int matriz[4][4], int *los_numeros) {
    if (hay_repetidos(matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3]))
        return 0;
    // Resto de las condiciones
    return 1;
}

void siguiente_combinacion(int *fila) {
    fila[3]++;
    if (fila[3] == 5) {
        fila[3] = 1;
        fila[2]++;
        if (fila[2] == 5) {
            fila[2] = 1;
            fila[1]++;
            if (fila[1] == 5) {
                fila[1] = 1;
                fila[0]++;
            }
        }
    }
}

int comprobar_extremos(int a, int b, int c, int d, int drcho, int izq) {
    int se_cumple_izq = 0;
    int se_cumple_drch = 0;

    if (izq == 4) {
        if (a == 1 && b == 2 && c == 3 && d == 4)
            se_cumple_izq = 1;
    }

    if (drcho == 4) {
        if (a == 4 && b == 3 && c == 2 && d == 1)
            se_cumple_drch = 1;
    } else if (drcho == 1) {
        if (d == 4)
            se_cumple_drch = 1;
    }

    if (se_cumple_izq && se_cumple_drch)
        return 1;
    else
        return 0;
}

int main() {
    // Aquí puedes agregar el código principal
    return 0;
}

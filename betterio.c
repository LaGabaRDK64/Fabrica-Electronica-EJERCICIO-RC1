#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "betterio.h"

/*Validacion de caracteres*/

void stringverification(char caracter[]){
    
    char caracterview[25];
    
    fgets(caracterview,25,stdin);
    
    /*Si el primer valor de word es igual a un espacio vacio o a salto de linea te devuelva */
    if (caracterview[0] == ' ' || caracterview[0] == '\n')
    {
        printf("||| ERROR  ||| :  El programa no admite espacios en blanco \n");
        printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");
        stringverification(caracter);
        return;
    }
    
    /*Elimina el espacio*/
    eliminatespace(caracterview);
    strcpy(caracter,caracterview);

}

/*Elimina espacios*/

void eliminatespace(char word[]){

    int longitud;
    int rango = 25;    

    for (int i = 0; i < rango; i++)
    {
        if (word[i] == '\n')
        {
            word[i] = '\0';
        }
        
    }

}

/*Validacion de entrada numerica (Con numeros enteros)entre un minimo y un maximo*/

int ENTnumberverification(int min, int max){

    int num;
    char buffer[25];
    char *ptr;

    do
    {
        fgets(buffer,15,stdin);
        /*El buffer guarda el string*/

        if(buffer[0] == ' ' || buffer[0] == '\n')
        {

            printf("||| ERROR ||| : El programa no admite espacios en blanco \n");
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }

        num = strtol(buffer, &ptr , 10);
        
        if(ptr == buffer)
        {

            printf("||| ERROR ||| : El programa no admite letras \n");
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }else if (*ptr != '\n' && *ptr != '\0')
        {
            
            printf("||| ERROR ||| : El programa no admite ese tipo de valor\n");
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }
        else if(num < min)
        {

            printf("||| ERROR ||| : El programa no admite numeros menores a %d \n", min);
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }else if (num > max)
        {

            printf("||| ERROR ||| : El programa no admite numeros mayores a %d \n", max);
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }

    }while (num < min || num > max || ptr == buffer || *ptr != '\n' && *ptr != '\0' || buffer[0] == ' ' || buffer[0] == '\n');

    return num;

}

/*Validacion de entrada numerica (Con numeros enteros)entre un minimo y un maximo*/

float DECnumberverification(float min, float max){

    float num;
    char buffer[25];
    char *ptr;

    do
    {
        fgets(buffer,15,stdin);
        /*El buffer guarda el string*/
        num = strtof(buffer, &ptr);

        if(buffer[0] == ' ' || buffer[0] == '\n')
        {

            printf("||| ERROR ||| : El programa no admite espacios en blanco \n");
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }else if (ptr == buffer)
        {

            printf("||| ERROR ||| : El programa no admite letras \n");
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }else if(num < min)
        {

            printf("||| ERROR ||| : El programa no admite numeros menores a %.2f \n", min);
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }else if (num > max)
        {

            printf("||| ERROR ||| : El programa no admite numeros mayores a %.2f \n", max);
            printf("Porfavor vuelva a ingresar su opcion aqui >>>> ");

        }

    }while (num < min || num > max || ptr == buffer || buffer[0] == ' ' || buffer[0] == '\n');

    return num;

}
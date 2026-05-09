#include "tools.h"
#include <stdio.h>
#include <windows.h>
#include <string.h>

void pause(){

    getchar();
    printf("\nIngrese una tecla para continuar...\n");

}

void wait(int wait_time){

    Sleep(wait_time);

}

void welcomeMsg(){

    printf("=============================\n");
    printf("           BIENVENIDO        \n");
    printf("=============================\n");

    printf("Este programa le ayudara a verificar \nsi los tiempos de fabricacion y recursos \nson suficientes para su produccion\n");

    wait(750);

}

int deleteIntIndx(int arr[], int index, int arrsize){

    if(index < 0 || index >= arrsize){
        return 1;

    }

    for(int i= index; i<(arrsize-1); i++){

        arr[i]= arr[i+1];

    }

    return 0;

}

int deleteFloatIndx(float arr[], int index, int arrsize){

    if(index < 0 || index >= arrsize){
        return 1;

    }

    for(int i= index; i<(arrsize-1); i++){

        arr[i]= arr[i+1];

    }

    return 0;

}

int deleteStrIndx(char str[][25], int index, int arrsize){

    if(index < 0 || index >= arrsize){
        return 1;

    }

    for(int i= index; i<(arrsize-1); i++){

        strcpy(str[i], str[i+1]);

    }

    return 0;

}
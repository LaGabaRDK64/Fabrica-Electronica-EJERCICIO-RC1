#ifndef betterio_h
#define betterio_h

/*Verifica cadena de caracteres*/
void stringverification(char caracter[]);
/*Elimina espacios de los textos*/
void eliminatespace(char word[]);
/*El numero entero ingresado entra a procesos de verificacion entre maximos y minimos, que no sean datos basuras o letras*/
int ENTnumberverification(int min, int max);
/*El numero decimal ingresado entra a procesos de verificacion entre maximos y minimos, que no sean datos basuras o letras*/
float DECnumberverification(float min, float max);

#endif
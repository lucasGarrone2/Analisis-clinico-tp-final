#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "InicioSesion.h"


int main()
{
    char user[30];
    char pass[5];

    char AdminCorrecto[30]=ADMIN;
    char ProCorrecto[30]=PROFESIONAL;
    char SecCorrecto[30]=SECRETARIO;

    ///PRINTFS PARA SABER QUE CARGAR
    printsInstructivos();
    gets(user);

    ///Validacion para ingresar los nombres correctos
    while(strcmp(user, AdminCorrecto)!=0 && strcmp(user, ProCorrecto)!=0 && strcmp(user, SecCorrecto)!=0)
    {
        sonidoError();
        barraPunteada();
        printf("\t\t\t\t\t\t\tUsuario invalido, vuelva a ingresarlo: ");
        gets(user);
        barraPunteada();
    }
    sonidoExito();
    ///Validacion para ingresar bien la contraseña

    printf("\t\t\t\t\t\t\tPassword: ");
    gets(pass);
    barraPunteada();
    int longitud= strlen(pass);
    int contador=0;
    while(longitud !=4 && contador < 3)
    {
        sonidoError();
        barraPunteada();
        volverAIngresarPass();
        gets(pass);
        barraPunteada();
        longitud=strlen(pass);
        contador++;

    }

    if(contador>=3)
        {
            sonidoError();
            barraPunteada();
            printf("\t\t\t\t\t\t\tDemasiados intentos, acceso denegado\n");
            barraPunteada();
            return 1;
        }
    sonidoExito();
    ///SI INGRESA MAS DE 4 DIGITOS MUESTRA DATOS INCORRECTOS

    int rol;

    rol= InicioDeSesion(user, pass);

    

    return 0;
}


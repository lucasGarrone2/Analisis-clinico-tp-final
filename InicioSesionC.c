#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "InicioSesion.h"



int InicioDeSesion(char user[], char pass[])
{
    int rol=0;
    if(strcmp(ADMIN, user)==0 && strcmp(passAdmin, pass)==0)
    {
        printf("\t\t\t\t\t\t\tInicio de sesion exitoso. rol: Admin\n");
        rol=1;
    }
    else if(strcmp(PROFESIONAL, user)==0 && strcmp(passPro, pass)==0)
    {
        printf("\t\t\t\t\t\t\tInicio de sesion exitoso. rol: Profesional\n");
        rol=2;
    }
    else if(strcmp(SECRETARIO, user)==0 && strcmp(passSec, pass)==0)
    {
        printf("\t\t\t\t\t\t\tInicio de sesion exitoso. rol: Administracion\n");
        rol=3;
    }
    else
    {
        printf("\t\t\t\t\t\t\tDatos incorrectos\n");
        rol=0;
    }

    return rol;
}



void printsInstructivos()
{
    printf("\t\t\t\t\t\t\t----------INICIO DE SESION----------\n\n");
    printf("\t\t\t\t\t\t\t................................................\n");
    printf("\t\t\t\t\t\t\tIngrese 'admin' para ingresar como administrador.\n");
    printf("\t\t\t\t\t\t\tIngrese 'pro' para ingresar como profesional.\n");
    printf("\t\t\t\t\t\t\tIngrese 'sec' para ingresar como administracion.\n");
    printf("\t\t\t\t\t\t\t................................................\n");
    printf("\t\t\t\t\t\t\tUser: ");
}

void barraPunteada()
{
         printf("\t\t\t\t\t\t\t................................................\n");
}

void sonidoExito()
{
    Beep(1000, 350);
}

void sonidoError()
{
    Beep(500, 750);
}

void volverAIngresarPass()
{
        printf("\t\t\t\t\t\t\tLa contrasena que se ingreso no tiene 4 digitos:\n");
        printf("\t\t\t\t\t\t\tIngrese la nueva contrasena:\n");
        printf("\t\t\t\t\t\t\tPassword: ");
}

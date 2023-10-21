#ifndef INICIOSESION_H_INCLUDED
#define INICIOSESION_H_INCLUDED
#define ADMIN "admin"
#define passAdmin "0001"

#define PROFESIONAL "pro"
#define passPro "0002"

#define SECRETARIO "sec"
#define passSec "0003"
int InicioDeSesion(char user[], char pass[]);
void printsInstructivos();
void barraPunteada();
void sonidoError();
void sonidoExito();
void volverAIngresarPass();

#endif // INICIOSESION_H_INCLUDED

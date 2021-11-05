/*
Password Generator 1.1

IT-it
Per importare questa libreria #include "pwgen.h"
Richiamo funzione "pwgen(tipo-di-password, lunghezza-password);"

tipo di password è un int da 0 a 3 e lunghezza passsword è un int da 1 a infinito

tipo 0 numeri + lettere + simboli
tipo 1 solo numeri
tipo 2 solo simboli
tipo 3 solo lettere

Questa funzione ritornera una stringa contenete la password

Per far funzionare questa libreria è richiesto -std=c++11 nelle stringhe dell'avvio del compiler
Tutte le librerie richiese sono già importate

-----------------------------------------------------------------------------------------------------

EN-en
To import this library use #include "pwgen.h"
Function "pwgen (password-type, password-length);"

password type is an int from 0 to 3 and passsword length is an int from 1 to infinity

type 0 numbers + letters + symbols
type 1 numbers only
type 2 symbols only
type 3 only letters

This function will return a string containing the password

For this library to work, -std = c ++ 11 is required in compiler startup strings
All required libraries are already imported
*/

#include <cmath>
#include <cstdlib>
#include <time.h>
#include <string>

std::string pwgen(int type, int lenght){
    std::string pw;
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char symbols[] = "!@#$%^&*";
    const char num[] = "0123456789";
    const char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_lengthletter = sizeof(letter)-1;
    int string_length = sizeof(alphanum)-1;
    int string_lengthNums = sizeof(num)-1;
    int string_lengthSymbols = sizeof(symbols)-1;
    
    switch(type){
        case 0:
            for(int i = 0; i < lenght; i++){
                pw = pw + alphanum[rand() % string_length];
            }
        
            break;
        
        case 1:
            for(int i = 0; i < lenght; i++){
                pw = pw + num[rand() % string_lengthNums];
            }
            break;
        case 2:
            for(int i = 0; i < lenght; i++){
                pw = pw + symbols[rand() % string_lengthSymbols];
            }
            break;
        case 3:
            for(int i = 0; i < lenght; i++){
                pw = pw + letter[rand() % string_lengthletter];
            }
            break;
    }
    
    return pw;
}
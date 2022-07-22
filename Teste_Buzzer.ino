/* Programa de teste do Buzzer do Shield Multi-função
  Blog Eletrogate - https://blog.eletrogate.com/guia-completo-do-shield-multi-funcoes-para-arduino
  Arduino UNO - IDE 1.8.5 - Shield Multi-função para Arduino
  Gustavo Murta   13/junho/2018
  Baseado em http://www.cohesivecomputing.co.uk/hackatronics/arduino-multi-function-shield/part-1/
*/

#include <TimerOne.h>                     // Bibliotec TimerOne 
#include <Wire.h>                         // Biblioteca Wire 
#include <MultiFuncShield.h>              // Biblioteca Multifunction shield

void setup()
{
  Timer1.initialize();                    // inicializa o Timer 1
  MFS.initialize(&Timer1);                // initializa a biblioteca Multi função
  Buzzer ();                              // toca a campainha 
}

void Buzzer ()
{
  MFS.beep();                             // Bip curto de 300 milisegundos
  delay(1000);                            // atraso de 1 segundo

                                         // 4 bips curtos , repetidos 3 vezes
  MFS.beep(5, // bip por 50 milisegundos
           5, // silencio por 50 milisegundos
           4, // repete o bip 4 vezes
           3, // repete o loop 3 vezes
           50 // aguarda 500 milisegundos entre os loops
          );
}

void loop()
{
}
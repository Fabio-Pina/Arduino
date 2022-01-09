//**************************************************************//
//  Name    : shiftOutCode, Hello World                         //
//  Author  : Carlyn Maw,Tom Igoe                               //
//  Date    : 25 Oct, 2006                                      //
//  Version : 1.0                                               //
//  Notes   : Code for using a 74HC595 Shift Register           //
//          : to count from 0 to 255                            //
//****************************************************************

// Pino conectado a ST_CP no 74HC595
int latchPin = 8;
// Pino conectado a ST_CP no 74HC595
int clockPin = 12;
// Pino conectado a DS no 74HC595
int dataPin = 11;

void setup() {
    // configura os pino usados no loop principa como saídas
    pinMode(latchPin, OUTPUT);
    pinMode(clockPin, INPUT);
    pinMode(dataPin, OUTPUT);
}

void loop() {
  // rotina de contagem de 0 até 255
  for (int j = 0; j < 256; j++) {
  // coloca e mantem o pino latch em low enquanto ocorre a transmissão
  digitalWrite(latchPin, LOW);

  // transmite o valor de j, a começar pelo bit menos significativo
  shiftOut(dataPin, clockPin, LSBFIRST, j);

  // retorna o pino latch para high para sinalizar ao chip
  // que esse nao precisa mais esperar por informação
  digitalWrite(latchPin, HIGH);
  delay(1000);
  }
}
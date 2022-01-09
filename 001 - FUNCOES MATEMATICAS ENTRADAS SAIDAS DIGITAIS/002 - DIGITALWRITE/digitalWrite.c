// O código configura o pino digital 13 como OUTPUT e troca seu estado
// entre HIGH e LOW

void setup(){
    pinMode(13, OUTPUT); // configura o pino digital 13 como saída
}

void loop() {
    digitalWrite(13, HIGH); // ativa o pino digital 13
    delay(1000);            // espera por um segundo
    digitalWrite(13, LOW);  // desativa o pino digital 13
    delay(1000);
}
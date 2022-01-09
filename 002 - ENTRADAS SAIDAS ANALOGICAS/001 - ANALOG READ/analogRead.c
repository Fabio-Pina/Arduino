// O código lê o valor de um pino de entrada analógica e mostra seu valor na porta serial

int analogPin = A3; // terminal do meio de um potenciômetro conectado ao pino analógico 3
                    // terminais mais externos são conectados um no ground e o outro em +5V
int val = 0;        // variável para guardar o valor lido

void setup() {
    Serial.begin(9600); // configura a porta serial
}

void loop() {
    val = analogRead(analogPin); // lê o pino de entrada
    Serial.println(val); // imprime o valor na porta serial
}
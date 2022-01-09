// O exemplo abaixo imprime a duração de um pulso no pino 7

int pino = 7;     // pino para a entrega do pulso
unsigned long duracao; // variável para guardar a duração do pulso

void setup() {
    Serial.begin(9600);
    pinMode(pino, INPUT);
}

void loop() {
    duracao = pulseIn(pino, HIGH);
    Serial.println(duracao)
}
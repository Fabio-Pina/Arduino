// O exemplo abaixo imprime na porta serial a duração de um pulso no pino 7

int pino = 7;     // pino para a entrada do pulso
unsigned long duracao; // variável para guardar a duração do pulso

void setup() {
    duracao = pulseInLong(pino, HIGH);
    Serial.println
}
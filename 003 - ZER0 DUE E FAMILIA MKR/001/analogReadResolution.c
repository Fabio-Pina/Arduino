// O código abaixo mostra como usar o conversor analogico digital com resoluções diferentes

void setup() {
    // abre a conexão serial
  Serial.begin(9600);
}

void loop() {
    // lê o valor no pino A0 na resolução padrão (10 bits)
    // e o envia pela conexão serial
    analogReadResolution(10);
    Serial.print("ADC 10-bit (padrão) : ");
    Serial.print(analogRead(A0));

    // muda a resolução para 16 bits e lê o pino A0
    analogReadResolution(16);
    Serial.print(", 16-bit : ");
    Serial.print(analogRead(A0));

    // muda a resolução para 8 bits e lê o pino
    analogReadResolution(8);
    Serial.print(", 8-bit : ");
    Serial.println(analogRead(A0))
    // um pequeno delay para não enviar dados muito rapidamente para o Serial Monitor
    delay(100);
}

// O código configura a resolução da saída PWM para diferentes valores

void setup() {
  // inicia a porta serial
  Serial.begin(9600);
  // configura os pinos digitais 11 a 13 como saída
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // Lê o valor analógico em A0 e mapeia-o para um 
  // pino PWD com um LED conectado
  int sensorVal = analogRead(A0);
  Serial.print("Analog Read) : ");
  Serial.print(sensorVal);

  // a resolução PWM padrão
  analogWriteResolution(8);
  analogWrite(11, map(sensorVal, 0, 1023, 0, 255));
  Serial.print(" , 8-bit PWM value : ");
  Serial.print(map(sensorialVal, 0, 1023, 0, 255));

  // Muda a reolução PWM para 12 bits
  // A resolução completa de 12 bits é suportada
  // apenas no Due

  analogWriteResolution(12);
  analogWrite(12, map(sensorialVal, 0, 1023, 0, 4095));
  Serial.print(" , 12-bit PWM value : ");
  Serial.print(map(sensorialVal, 0, 1023, 0, 4095));

  

}
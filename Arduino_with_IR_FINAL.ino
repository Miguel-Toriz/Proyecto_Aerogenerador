const int SENSOR_PIN = A0;

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  // Leer ADC (0–1023)
  int raw = analogRead(SENSOR_PIN);

  // Convertir a voltaje (ADC de 10 bits con referencia de 5V)
  float volt = raw * (5.0 / 1023.0);

  // Convertir voltaje a corriente
  float corriente = volt * 30.0;  // 1V = 30A

  Serial.print("raw = ");
  Serial.print(raw);

  Serial.print("   volt = ");
  Serial.print(volt, 4);

  Serial.print(" V   corriente = ");
  Serial.print(corriente, 2);
  Serial.println(" A");

  delay(200);
}

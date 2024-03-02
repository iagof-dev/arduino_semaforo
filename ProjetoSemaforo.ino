int led_vermelho = 6;
int led_amarelo = 5;
int led_verde = 4;
void setup()
{
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(led_vermelho, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_verde, LOW);
  delay(1000);
}

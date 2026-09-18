void checkAlert() {
  if (temperature > 6.0) {
    digitalWrite(BUZZER_PIN, HIGH);
    Serial.println("ALERT: Temperature HIGH!");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }
}

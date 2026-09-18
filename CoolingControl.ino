void controlCooling() {
  if (temperature > 4.0) {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Cooling ON");
  } else {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Cooling OFF");
  }
}

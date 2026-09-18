void readTemperature() {
  sensors.requestTemperatures();

  temperature = sensors.getTempCByIndex(0);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
}

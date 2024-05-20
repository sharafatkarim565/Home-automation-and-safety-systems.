void relay(){

    if ( Serial.available() > 0)
  {
    data = Serial.readString();
    data.trim();
    Serial.print(data);
    if (data == "1A" )
      digitalWrite(d1, LOW);
    if (data == "1a")
      digitalWrite(d1, HIGH);
    if (data == "2A" )
      digitalWrite(d2, LOW);
    if (data == "2a")
      digitalWrite(d2, HIGH);
    if (data == "3A" )
      digitalWrite(d3, LOW);
    if (data == "3a")
      digitalWrite(d3, HIGH);
    if (data == "4A" )
      digitalWrite(d4, LOW);
    if (data == "4a")
      digitalWrite(d4, HIGH);

  }
}

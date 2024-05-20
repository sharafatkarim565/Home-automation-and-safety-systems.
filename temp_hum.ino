void temp_hum()
{
    relay();
    hum = dht.readHumidity();
    temp = dht.readTemperature();
    display.clearDisplay();
    display.setTextSize(2);
    display.setCursor(0, 10);
    display.print("T :");
    display.setCursor(40, 10);
    display.print(temp);
    display.setCursor(105, 10);
    display.print("C");
    display.setCursor(0, 40);
    display.print("H :");
    display.setCursor(40, 40);
    display.print(hum);
    display.setCursor(105, 40);
    display.print("%");
    display.display();
    delay(1000);


}

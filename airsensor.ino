void airsensor() {

    float* values = mq2.read(true); //set it false if you don't want to print the values to the Serial
    if (lpg = mq2.readLPG() >= 2)
    {
      relay();
      display.clearDisplay();
      display.setTextSize(2);
      display.setCursor(50, 30);
      display.println("LPG");
      display.setCursor(50, 50);
      display.println(lpg);
      display.display();
      delay(1000);
    }
    else if (smoke = mq2.readSmoke() >= 4)
    {
      relay();
      display.clearDisplay();
      display.setTextSize(2);
      display.setCursor(40, 20);
      display.println("SMOKE");
      display.display();
      delay(1000);
    }
    else {
      relay();
      display.clearDisplay();
      display.setTextSize(2);
      display.setCursor(40, 20);
      display.println("GOOD");
      display.display();
      delay(1000);
    }

}

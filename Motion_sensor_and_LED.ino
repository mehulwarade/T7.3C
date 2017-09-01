void setup() {
  // put your setup code here, to run once:
   pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
        if (digitalRead(6) == HIGH) {
               Serial.println("Active");
               delay(1000);
               digitalWrite(LED_BUILTIN, HIGH);                  
           
                 
         
         }
        else {
          Serial.println("Inactive");
          digitalWrite(LED_BUILTIN, LOW);
         }
        delay(1000);
}

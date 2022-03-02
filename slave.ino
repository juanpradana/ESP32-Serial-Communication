#include <SoftwareSerial.h>

// Sending/Receiving example

HardwareSerial Receiver(2); // Define a Serial port instance called 'Receiver' using serial port 2

#define Receiver_Txd_pin 27
#define Receiver_Rxd_pin 14

void setup() {
  //Serial.begin(Baud Rate, Data Protocol, Txd pin, Rxd pin);
  Serial.begin(9600);                                                   // Define and start serial monitor
  Receiver.begin(9600, SERIAL_8N1, Receiver_Txd_pin, Receiver_Rxd_pin); // Define and start Receiver serial port
}

void loop() {
 while (Receiver.available()) {                         // Wait for the Receiver to get the characters
    Serial.println(Receiver.readString());             // Display the result on the serial monitor
    Receiver.print("Masuk Bro");
  };
  delay(2000);
}

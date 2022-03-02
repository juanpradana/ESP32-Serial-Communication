// Sending/Receiving example

HardwareSerial Sender(1);   // Define a Serial port instance called 'Sender' using serial port 1

#define Sender_Txd_pin 17
#define Sender_Rxd_pin 16

void setup() {
  //Serial.begin(Baud Rate, Data Protocol, Txd pin, Rxd pin);
  Serial.begin(9600);                                             // Define and start serial monitor
  Sender.begin(9600, SERIAL_8N1, Sender_Txd_pin, Sender_Rxd_pin); // Define and start Sender serial port
}

void loop() {
  Sender.print("Ping!!");
  Serial.println("Menunggu jawaban..");
  delay(2000);
  if (Sender.available()) {                         // Wait for the Receiver to get the characters
    Serial.println(Sender);
  };
}

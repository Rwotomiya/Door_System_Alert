#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
char cmd;


void setup() {
  // put your setup code here, to run once:
  SerialBT.begin("ELite Team Home");
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (SerialBT.available()){
      cmd = SerialBT.read();
  }
  if(cmd == '1'){
    digitalWrite(2, HIGH);
  }
 if (cmd == '0'){
    digitalWrite(2, LOW);
  }
delay(20);
}

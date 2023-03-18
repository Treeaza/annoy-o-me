// Firmware for the annoy-o-me ATtiny noisemaker by Jasper Rubin (jasperrubin.com)
// https://github.com/Treeaza/annoy-o-me
// This code is free to use but includes no waranty, gurantee of functionality, or support
// Copyright 2021, Jasper Rubin
// All rights reserved


// ---------- PARAMETERS ----------

// bits are (LSB first):
// 1: heartbeat on/off
// 2-4: currently unused, may be used in future for heartbeat types
// 5: recovery tone on/off
// 6: 
// 7:
// 8:
//PROGMEM const byte SYSTEM_TOGGLES = 0b00000000;
//
//#define ST_HEARTBEAT_EN 0b00000001
//#define ST_HEARTBEAT_TYPE 0b00001110
//#define ST_RECOVERY_EN 0b00010000

// ^^^^^^^^^^ END PARAMETERS ^^^^^^^^^^

#define BUZZER_PIN 7
//#define IR_IN_PIN 8
//#define ANALOG_IN_PIN 0
//#define IR_OUT_PIN 10
//#define DIGITAL_OUT_PIN 9

//volatile bool validHeartbeat;

// ---------- FUNCTION PROTOTYPES ----------

void sleepSeconds(unsigned long);

//void interruptHeartbeatISR();
//void startHeartbeat_digitalVoltage(int, int);
//bool verifyHeartbeat_digitalVoltage(int);

// ^^^^^^^^^^ END FUNCTION PROTOTOTYPES ^^^^^^^^^^

// --------- SLEEP ----------

// Sleep for specified duration in seconds (roughly)
void sleepSeconds(unsigned long seconds){
  
}

// ^^^^^^^^^^ END SLEEP ^^^^^^^^^^

// ---------- HEARTBEAT ----------

// Generic heartbeat failure ISR
//void interruptHeartbeatISR(){
//  validHeartbeat = false;
//}

// Start digital voltage heartbeat
//void startHeartbeat_digitalVoltage(int inPin){
//  // set pinmodes and start heartbeat
//  pinMode(inPin, INPUT);
//
//  // set up interrupt
//  attachInterrupt(digitalPinToInterrupt(inPin), interruptHeartbeatISR, FALLING);
//  
//  validHeartbeat = true;
//}
//
//// Verify digital voltage heartbeat
//bool verifyHeartbeat_digitalVoltage(int inPin){
//  return digitalRead(inPin);
//}

// ^^^^^^^^^^ END HEARTBEAT ^^^^^^^^^^

// ---------- MAIN CODE ----------

void setup(){
  pinMode(BUZZER_PIN, OUTPUT);
  delay(5000);
}

void loop(){
  tone(BUZZER_PIN, 2000);
  delay(500);
  noTone(BUZZER_PIN);
  delay(1000);
}

// ^^^^^^^^^^ END MAIN CODE ^^^^^^^^^^

// This is the main file for the IRControl.ino project.
// It is a simple IR remote control for the Arduino.
// It uses the IRremote library to decode the IR signals.


// Import IRremote library
#include <IRremote.h>

// Define the IR receiver pin
const int IR_RECEIVER_PIN = 11;

// Define the IR receiver object
IRrecv irrecv(IR_RECEIVER_PIN);

// Define the decoded IR signal
decode_results results;

// Setup the Arduino
void setup() {
  // Start the serial port
  Serial.begin(9600);
  // Start the IR receiver
  irrecv.enableIRIn();
}

// Main loop (for printing the IR signal so that we can use it to assign a function)
void loop() {
  // Check if a signal was received
  if (irrecv.decode(&results)) {
    // Print the signal value
    Serial.println(results.value, HEX);
    // Resume the IR receiver
    irrecv.resume();
  }
}

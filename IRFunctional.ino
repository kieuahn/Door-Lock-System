#include <IRremote.h>

// Define the IR receiver pin
const int IR_RECEIVER_PIN = 11;

// Define the IR receiver object
IRrecv irrecv(IR_RECEIVER_PIN);

// Define the decoded IR signal (can be changed to suit the code)
const RED = 7; // LEd red at pin 7
const YELLOW = 6; // LED yellow at pin 6
const GREEN = 5; // LED green at pin 5

// LED states default to off
boolean redState = LOW;
boolean yellowState = LOW;
boolean greenState = LOW;

// Setup the Arduino
void setup() {
  // Start the serial port
  Serial.begin(9600);
  // Start the IR receiver
  irrecv.enableIRIn();
  // Set the LED pins to output
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

// Translate the IR signal to a function
void translateIR {
    switch (results.value)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
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
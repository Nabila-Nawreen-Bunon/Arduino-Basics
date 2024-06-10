// Define the pin for the temperature sensor
#define SENSOR_PIN A0
// Define the pin for the LED
#define LED_PIN 13
// Set the temperature threshold
const float thresholdTemp = 25.0; // Change this value to your desired threshold

void setup() {
  // Start serial communication
  Serial.begin(9600);
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Read the temperature from the sensor
  float tempC = Serial.read() * 1.00;

  // Print the temperature to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" °C");

  // Check if temperature exceeds threshold
  if (tempC > thresholdTemp) {
    // Turn on the LED
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Temperature exceeds threshold. LED turned on.");
  } else {
    // Turn off the LED
    digitalWrite(LED_PIN, LOW);
    Serial.println("Temperature is below threshold. LED turned off.");
  }

  // Delay for a while before taking the next temperature reading
  delay(1000);
}
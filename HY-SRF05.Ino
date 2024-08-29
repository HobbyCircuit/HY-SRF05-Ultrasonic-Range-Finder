/*
* Hobby Circuit
* https://hobby-circuit.com

* Written by: Reece Smith-Ward
* Date: 28th Aug 2024

* HY-SRF05 Ultrasonic Range Finder
*/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define SCREEN_WIDTH 128 // OLED display width (in pixels)
#define SCREEN_HEIGHT 64 // OLED display height (in pixels)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino resetpin)

Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define SR04_TRIGGER 33
#define SR04_ECHO 32

//define sound speed in cm/uS
#define SOUND_SPEED 0.034
#define CM_TO_INCH 0.393701

long duration;
float distanceCm;
float distanceInch;

void setup() 
{
  pinMode(SR04_TRIGGER, OUTPUT);
  pinMode(SR04_ECHO, INPUT);

  Wire.begin(26, 27);
  Serial.begin(9600);
  display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

  delay(250); 

  if (!display.begin(0x3C, true)) 
  {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); //halt
  }

  DrawInitScreen();
}

void loop() 
{
  // Clears the trigPin
  digitalWrite(SR04_TRIGGER, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(SR04_TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(SR04_TRIGGER, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(SR04_ECHO, HIGH);
  
  // Calculate the distance
  distanceCm = duration * SOUND_SPEED/2;

  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);
  
  DrawInitScreen();
  display.setTextSize(3);
  display.setCursor(0, 30);
  display.println(String(distanceCm));
  display.display();

  delay(200);
}

void DrawInitScreen() 
{
  display.clearDisplay();
  display.setTextColor(SH110X_WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Hobby Circuit!");
  display.setCursor(0, 16);
  display.println("HY-SRF05 Range Finder");
  display.display();
}

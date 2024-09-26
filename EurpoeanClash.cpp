// code for assigning variables and pins for LEDs and Photoresisor in the program
// setting variables for each of the LEDs and Photoresistors.
  int pResistor = A0;
  int ledPin=9;
// the numbers are equal to the pin each of the pins it is connected to. 
int pos = 0;
int red = 3;
int red1 = 4;
int green = 5;
int green1 = 6;
int yellow = 7;
int yellow1 = 8;
int red3 = 10;
int value;
// code for assigning pins to LEDs and Photoresistor
void setup()
{
// This part of the code shows which parts of the circuit output or input information.
  pinMode(red, OUTPUT);
  pinMode(red1,OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red3,OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(pResistor, INPUT);
}

// code for making the LEDs turn on properly to portray the lights in the intersection. This block also includes the code for the street lamp turning on during darkness
void loop()
{
  digitalWrite(red,HIGH);
  digitalWrite(green1,HIGH);
  delay(15000); //turns on for 15 seconds, waits 2 seconds for yellow lights then turns to red
  digitalWrite(green1,LOW);
  delay(200);
  digitalWrite(yellow1,HIGH);
  delay(2000);  
  digitalWrite(yellow1,LOW);
  delay(100);
  digitalWrite(red1,HIGH);
  digitalWrite(red,LOW);
  delay(100);
  digitalWrite(green,HIGH);
  delay(20000);
  digitalWrite(green,LOW);
  delay(200);
  digitalWrite(yellow,HIGH);
  delay(2000);
  digitalWrite(yellow,LOW);
  delay(200);
  digitalWrite(red1,LOW);
 
//code for street lamp
  value = analogRead(pResistor);
 
  if (value > 100){
    digitalWrite(ledPin, LOW);  //Turn led off
  }
  else{
    digitalWrite(ledPin, HIGH); //Turn led on
  }

  delay(500); //Small delay
} 


int freq;

void setup()
{
   Serial.begin(9600);           // initialize serial communications

  pinMode(11, OUTPUT);
}

void loop()
{

   if (Serial.available() > 0) { // if there's serial data available
 int inByte = Serial.read();   // read it
 Serial.write(inByte);         // send it back out as raw binary data
pinMode(11, inByte);       // use it to set the LED brightness

tone(11, freq);
  delay(600); 
  noTone(11);
  delay(100);

  freq = random (100);

tone(11, 40);
delay(100); 
  noTone(11);
  delay(100);

  tone(11, freq);
  delay(1000); 
  noTone(11);
  delay(100);

   tone(11, freq);
  delay(100); 
  noTone(11);
  delay(100);
   }}

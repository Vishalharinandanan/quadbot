#include <IRremote.h>
const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
int IRValue;
#include <VarSpeedServo.h>
VarSpeedServo b1;
VarSpeedServo b2;
VarSpeedServo b3;
VarSpeedServo b4;
VarSpeedServo L1;
VarSpeedServo L2;
VarSpeedServo L3;
VarSpeedServo L4;
VarSpeedServo s1;
void setup()
{
 s1.attach(10); 
 b1.attach(3);
 b2.attach(4);
 b3.attach(7);
 b4.attach(8);
 L1.attach(2);
 L2.attach(5);
 L3.attach(6);
 L4.attach(9);
 
void stand();
 delay(1000);
irrecv.enableIRIn();
irrecv.blink13(true);
}
void loop()
{
if (irrecv.decode(&results)){
  if (results.value == 0xFF18E7) //front
 {
   L1.write(90,225);
 L3.write(90,225);
 delay(500);

 b1.write(140,225);
 b3.write(40,225);
 delay(500);

 L1.write(60,225);
 L3.write(60,225);
 delay(500);

 b1.write(90,225);
 b3.write(90,225);
 L2.write(90,225);
 L4.write(90,225);
 delay(500);

 b2.write(140,225);
 b4.write(40,225);
 delay(500);

 L2.write(60,225);
 L4.write(60,225);
 
 b2.write(90,225);
 b4.write(90,225);
 }
if (results.value == 0xFF10EF) //left
 {
  L1.write(90,225);
 L3.write(90,225);
 delay(500);

 b1.write(40,225);
 b3.write(40,225);
 delay(500);

 L1.write(60,225);
 L3.write(60,225);
 delay(500);

 b1.write(90,225);
 b3.write(90,225);
 L2.write(90,225);
 L4.write(90,225);
 delay(500);

 b2.write(40,225);
 b4.write(40,225);
 delay(500);

 L2.write(60,225);
 L4.write(60,225);
 
 b2.write(90,225);
 b4.write(90,225);
 }
 if (results.value == 0xFF5AA5)//right
 {
  L1.write(90,225);
 L3.write(90,225);
 delay(500);

 b1.write(140,225);
 b3.write(140,225);
 delay(500);

 L1.write(60,225);
 L3.write(60,225);
 delay(500);

 b1.write(90,225);
 b3.write(90,225);
 L2.write(90,225);
 L4.write(90,225);
 delay(500);

 b2.write(140,225);
 b4.write(140,225);
 delay(500);

 L2.write(60,225);
 L4.write(60,225);
 
 b2.write(90,225);
 b4.write(90,225);
 }
  if (results.value == 0xFFA25D)//1
 {
  s1.write(180, 50);
 }
if (results.value == 0xFF629D)//2
 {
  s1.write(90, 50);
 }
 if (results.value == 0xFFE21D)//3
 {
  s1.write(0, 50);
 }
 irrecv.resume();
}
void stand();
{
b1.write(90,100);
 b2.write(90,100);
 b3.write(90,100);
 b4.write(90,100);
 
 L1.write(60,100);
 L2.write(60,100);
 L3.write(60,100);
 L4.write(60,100);
}

}


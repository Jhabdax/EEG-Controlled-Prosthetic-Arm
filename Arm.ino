#include <Servo.h>
//initiate servo
Servo pinky;
Servo ring;
Servo middle;
Servo index;
Servo thumb;
//Servo wrist;
//Servo bipiston;    //forearm up and down (from bicep)
//Servo birotate;    //biccep rotation
//Servo shorotate;   //arm up and down (from shoulder)
//Servo shopiston;   //shoulder in and out
char val;
int ppos = 0;
int rpos = 0;
int mpos = 0;
int ipos = 0;
int tpos = 0;
//int wpos = 180;
//int bppos = 0;
//int brpos = 65;
//int srpos = 0;
//int sppos = 0;
void setup()
{
  //Show which servo is connected to which pin
  pinky.attach(11);
  ring.attach(10);
  middle.attach(9);
  index.attach(6);
  thumb.attach(5);
//  wrist.attach(6);
//  bipiston.attach(7);
//  birot.attach(8);
//  shopiston.attach(9);
//  shorot.attach(10);
  //set all servos to starting position
  pinky.write(0);
  ring.write(0);
  middle.write(0);
  index.write(0);
  thumb.write(0);
//  wrist.write(180);
//  bipistion.write(0);
//  birot.write(0);
//  shopiston.write(0);
//  shorot.write(0);
  Serial.begin(9600); //start serial output at 9600
  Serial.println("WE WORK!!");
}
void loop()
{
  if (Serial.available()) {
    val = Serial.read();
//    if (val == 'q') {     //close pinky
//      ppos = 180;
//      pinky.write(ppos);
//    }
//    if (val == 'a') {     //open pinky
//      ppos = 0;
//      pinky.write(ppos);
//    }
//    if (val == 'w') {     //close ring finger
//      rpos = 180;
//      ring.write(rpos);
//    }
//    if (val == 's') {    //open ring finger
//      rpos = 0;
//      ring.write(rpos);
//    }
//    if (val == 'e') {    //close middle finger
//      mpos = 180;
//      middle.write(mpos);
//    }
//    if (val == 'd') {    //open middle finger
//      mpos = 0;
//      middle.write(mpos);
//    }
//    if (val == 'r') {   //close index finger
//      ipos = 180;
//      index.write(ipos);
//    }
//    if (val == 'f') {    //open index finger
//      ipos = 0;
//      index.write(ipos);
//    }
//    if (val == 't') {    //close thumb
//      tpos = 180;
//      thumb.write(tpos);
//    }
//    if (val == 'g') {   //open thumb
//      tpos = 0;
//      thumb.write(tpos);
//    }
//    if (val == 'y') {    //rotate wrist counter clockwise
//      wpos = 0;
//      wrist.write(wpos);
//    }
//    if (val == 'h') {    //rotate wrist clockwise
//      wpos = 200;
//      wrist.write(wpos);
//    }
    if (val == 'H') {     //close whole hand
      ppos = 180;

      pinky.write(ppos);
      ring.write(ppos);
      middle.write(ppos);
      index.write(ppos);
      thumb.write(ppos);
    }
    if (val == 'L') {     //open whole hand
      ppos = 0;
      rpos=60;
      pinky.write(ppos);
      ring.write(ppos);
      middle.write(rpos);
      index.write(ppos);
      thumb.write(ppos);
    }
//    if (val == 'u') {      //move forearm up
//      bppos = 90;
//      bipiston.write(bppos);
//    }
//    if (val == 'j') {
//      bppos = 0;
//      bipiston.write(bppos);   //move forearm down
//    }
//    if (val == 'i') {          //rotate bicep counter clockwise
//      brpos = 180;
//      birot.write(brpos);
//    }
//    if (val == 'k') {         //rotate bicep clockwise
//      brpos = 0;
//      birot.write(brpos);
//    }
//    if (val == 'o') {         //move arm out
//      sppos = 90;
//      shopiston.write(sppos);
//    }
//    if (val == 'l') {        //move arm in
//      sppos = 0;
//      shopiston.write(sppos);
//    }
//    if (val == 'p') {      //rotate arm up
//      srpos = 180;
//      shorot.write(srpos);
//    }
//    if (val == ';') {        //rotate arm down
//      srpos = 0;
//      shorot.write(srpos);
//    }
  }
}

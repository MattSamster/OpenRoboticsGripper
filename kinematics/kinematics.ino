/*
to do:
convert kinematic model from paper to this document
*/
#include math.h
//in cm

#define digit1length = 5;
#define digit2length = 2.156;
#define digit3length = 5.5;
#define anglepin1 = 1;
#define anglepin2 = 2;
#define anglepin3 = 3;
#define anglepin4 = 4; //splay 2
#define anglepin5 = 5; //splay 1

//

int main() {

//middle finger

  double joint11angle = analogRead(anglepin1); //read off of encoder

  double joint12posn = {0, digit1length * cos(joint11angle), digit1length * sin(joint11angle)};
  double joint13posn = {0, digit2length * cos(joint12angle), digit2length * sin(joint12angle)} + joint12posn;   
  double fingertip1 = {0, digit13length * cos(joint13angle), digit13length * sin(joint13angle)} + joint13posn;

//right finger 

  double joint21angle = analogRead(anglepin2); //read off of encoder

  double joint22posn = {0, digitlength * cos(joint21angle), digit1ength * sin(joint21angle), digit1length * sin(joint21angle) * sin(anglepin4)};
  double joint23posn = {0, digit2ength * cos(joint22angle), digit2ength * sin(joint22angle), digit2length * sin(joint21angle) * sin(anglepin4)} + joint22posn;   
  double fingertip2 = {0, digit3length * cos(joint23angle), digit3length * sin(joint23angle), digit3length * sin(joint21angle) * sin(anglepin4)} + joint23posn;

//left finger

  double joint31angle = analogRead(anglepin3); //read off of encoder

  double joint32posn = {0, digitlength * cos(joint31angle), digit1length * sin(joint31angle), digit1length * sin(joint31angle) * sin(anglepin5)};
  double joint33posn = {0, digit2ength * cos(joint32angle), digit2length * sin(joint32angle), digit2length * sin(joint31angle) * sin(anglepin5)} + joint32posn;   
  double fingertip3 = {0, digit3length * cos(joint33angle), digit3length * sin(joint33angle), digit3length * sin(joint31angle) * sin(anglepin5)} + joint33posn;

}

/*
to do:
convert kinematic model from paper to this document
*/
#include math.h
//in cm
int main() {

    int digit1length = 5;
    int digit2length = 2.156;
    int digit3length = 5.5;

    double joint11angle = analogRead; //read off of encoder
    double joint12angle; //read off of encoder
    double joint13angle; //read off of encoder

    double joint11posn[3] = {0,0,0};
    double joint12posn[3] = {0, digit1length * cos(joint11angle), digit1length * sin(joint11angle)};
    double joint13posn[3] = {0, digit2length * cos(joint12angle), digit2length * sin(joint12angle)} + joint12posn;   
    double fingertip1[3] = {0, };

}

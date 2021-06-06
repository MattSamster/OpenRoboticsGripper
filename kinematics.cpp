/*
to do:
convert kinematic model from paper to this document
*/
//in cm
int digit11 = 5;
int digit12 = 2.156;
int digit13 = 5.5;

int digit21 = 5;
int digit22 = 2.156;
int digit23 = 5.5;

int digit31 = 5;
int digit32 = 2.156;
int digit33 = 5.5;

double joint11angle; //read off of encoder
double joint12angle; //read off of encoder
double joint13angle; //read off of encoder

double joint11posn[3] = {0,cos(joint11angle), sin(joint11angle)};
double joint12posn[3] = {0,cos(joint12angle), sin(joint12angle)};
double joint13posn[3] = {0,cos(joint13angle), sin(joint13angle)};
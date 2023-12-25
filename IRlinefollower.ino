const int in1 = 9;
const int in2 = 6;
const int in3 = 5;
const int in4 = 3;

const int s1 = 4;
const int s2 = 7;
const int s3 = 8;
const int s4 = 9;
const int s5 = 10;
const int s6 = 11;
const int s7 = 12;
const int s8 = 13;

int sensor1;
int sensor2;
int sensor3;
int sensor4;
int sensor5;
int sensor6;
int sensor7;
int sensor8;
int sensor9;
int spd=60;

void setup() {
  //Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // put your setup code here, to run once:
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);
  pinMode(s6, INPUT);
  pinMode(s7, INPUT);
  pinMode(s8, INPUT);
  pinMode(s9, INPUT);
}

void loop() {

  sensor1 = digitalRead(s1);
  sensor2 = digitalRead(s2);
  sensor3 = digitalRead(s3);
  sensor4 = digitalRead(s4);
  sensor5= digitalRead(s5);
  sensor5= digitalRead(s6);
  sensor5= digitalRead(s7);
  sensor5= digitalRead(s8);
  sensor5= digitalRead(s9);
 // Serial.print(sensor1);
 // Serial.print("     ");
 // Serial.print(sensor2);
 // Serial.print("     ");
 // Serial.print(sensor3);
 // Serial.print("     ");
 //Serial.println(sensor4);
 // Serial.print("     ");
 //Serial.println(sensor5);
  // forward movement

  //turnright
  if (sensor5 == 1) {

    digitalWrite(in1, LOW);
    digitalWrite(in2,LOW);
    analogWrite(in3, spd);
    digitalWrite(in4, LOW);
  }
  //turnleft
  else if (sensor1 == 1) {
    analogWrite(in1, spd);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    analogWrite(in4, 0);

  }
  //Turning ir line follower slightly left
  else if (sensor2== 1) {
    analogWrite(in1, spd);
    digitalWrite(in2, LOW);
    analogWrite(in3, 0);
    digitalWrite(in4, LOW);

  }
  //Turning IR line follower slightly right
  else if (sensor4==1) {
    analogWrite(in1, 0);
    digitalWrite(in2, LOW);
    analogWrite(in3, spd);
    digitalWrite(in4, LOW);

  } 
  else if (sensor3==1) {
    analogWrite(in1, spd);
    digitalWrite(in2, LOW);
    analogWrite(in3, spd);  
    digitalWrite(in4, LOW);
  } 
    else if (sensor3==0) {
    analogWrite(in1, spd);
    digitalWrite(in2, LOW);
    analogWrite(in3, 0);
    analogWrite(in4, spd);
  } 

}

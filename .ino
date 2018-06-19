int s1a;
int s1b;
int s2a;
int s2b;
int s3a;
int s3b;
int s4a;
int s4b;
int s5a;
int s5b;
int s6a;
int s6b;
int s7a;
int s7b;
int s8a;
int s8b;
int s9a;
int s9b;
int s10a;
int s10b;

void setup() {
// put your setup code here, to run once:


pinMode(30, INPUT_PULLUP);
pinMode(29, INPUT_PULLUP);
pinMode(28, INPUT_PULLUP);
pinMode(27, INPUT_PULLUP);
pinMode(26, INPUT_PULLUP);
pinMode(25, INPUT_PULLUP);
pinMode(24, INPUT_PULLUP);
pinMode(23, INPUT_PULLUP);
pinMode(22, INPUT_PULLUP);
pinMode(12, INPUT_PULLUP);
pinMode(11, INPUT_PULLUP);
pinMode(10, INPUT_PULLUP);
pinMode(9, INPUT_PULLUP);
pinMode(8, INPUT_PULLUP);
pinMode(7, INPUT_PULLUP);
pinMode(6, INPUT_PULLUP);
pinMode(5, INPUT_PULLUP);
pinMode(4, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
pinMode(2, INPUT_PULLUP);

}

void loop() {
// put your main code here, to run repeatedly:

int s1a = digitalRead(2);
int s1b = digitalRead(3);
int s2a = digitalRead(4);
int s2b = digitalRead(5);
int s3a = digitalRead(6);
int s3b = digitalRead(7);
int s4a = digitalRead(8);
int s4b = digitalRead(9);
int s5a = digitalRead(10);
int s5b = digitalRead(11);
int s6a = digitalRead(12);
int s6b = digitalRead(22);
int s7a = digitalRead(23);
int s7b = digitalRead(24);
int s8a = digitalRead(25);
int s8b = digitalRead(26);
int s9a = digitalRead(27);
int s9b = digitalRead(28);
int s10a = digitalRead(29);
int s10b = digitalRead(30);

switch (s1a) {
case 0:
//do something when s1a equals 0
digitalWrite(31, HIGH);
break;
case 1:
//do something when s1b equals 1
digitalWrite(31, LOW);
break;
}
switch (s1b) {
case 0:
//do something when var equals 0
digitalWrite(32, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(32, LOW);
break;


}
switch (s2a) {
case 0:
//do something when var equals 0
digitalWrite(33, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(33, LOW);
break;

}
switch (s2b) {
case 0:
//do something when var equals 0
digitalWrite(34, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(34, LOW);
break;


}

switch (s3a) {
case 0:
//do something when var equals 0
digitalWrite(35, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(35, LOW);
break;


}
switch (s3b) {
case 0:
//do something when var equals 0
digitalWrite(36, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(36, LOW);
break;


}

switch (s4a) {
case 0:
//do something when var equals 0
digitalWrite(37, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(37, LOW);
break;


}
switch (s4b) {
case 0:
//do something when var equals 0
digitalWrite(38, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(38, LOW);
break;


}
switch (s5a) {
case 0:
//do something when var equals 0
digitalWrite(39, HIGH);
break;
case 1:
//do something when var equals 1
digitalWrite(39, LOW);
break;


}
switch (s5b) {
case 0:
//do something when var equals 0
digitalWrite(40, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(40, LOW);
break;


}

switch (s6a) {
case 0:
//do something when var equals 0
digitalWrite(41, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(41, LOW);
break;


}
switch (s6b) {
case 0:
//do something when var equals 0
digitalWrite(42, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(42, LOW);
break;
}

switch (s7a) {
case 0:
//do something when var equals 0
digitalWrite(43, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(43, LOW);
break;


}
switch (s7b) {
case 0:
//do something when var equals 0
digitalWrite(44, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(44, LOW);
break;


}

switch (s8a) {
case 0:
//do something when var equals 0
digitalWrite(45, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(45, LOW);
break;


}
switch (s8b) {
case 0:
//do something when var equals 0
digitalWrite(46, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(46, LOW);
break;


}

switch (s9a) {
case 0:
//do something when var equals 0
digitalWrite(47, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(47, LOW);
break;


}
switch (s9b) {
case 0:
//do something when var equals 0
digitalWrite(40, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(40, LOW);
break;


}

switch (s10a) {
case 0:
//do something when var equals 0
digitalWrite(39, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(39, LOW);
break;


}
switch (s10b) {
case 0:
//do something when var equals 0
digitalWrite(40, HIGH);
break;
case 1:
//do something when var equals 2
digitalWrite(40, LOW);
break;


} 
}

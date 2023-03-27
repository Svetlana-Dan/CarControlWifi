#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7

// #include <SoftwareSerial.h>
 
// SoftwareSerial mySerial(0, 1);

void setup() {
  Serial.begin(9600);
  // mySerial.begin(115200);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);

}

void loop() {
   if (Serial.available() >= 1){ //проверяем пришли ли символы
    byte cmd = Serial.read(); 
    if (cmd == 'f'){
      forward();
    }
    else if (cmd == 's'){
      stop();
    }
    else if (cmd == 'b'){
      backward();
    }
    else if (cmd == 'r'){
      right();
    }
    else if (cmd == 'l'){
      left();
    }

  }

}

void stop(){
  analogWrite(pin6, 0);
  analogWrite(pin5, 0);
}

void forward(){
  digitalWrite(pin7, HIGH);
  analogWrite(pin6, 250);
  digitalWrite(pin4, HIGH);
  analogWrite(pin5, 250);
}

void backward(){
  digitalWrite(pin7, LOW);
  analogWrite(pin6, 250);
  digitalWrite(pin4, LOW);
  analogWrite(pin5, 250);
}

void right(){
  analogWrite(pin6, 250);
  digitalWrite(pin7, HIGH);
  analogWrite(pin5, 250);
  digitalWrite(pin4, LOW);
}

void left(){ 
  analogWrite(pin6, 250);
  digitalWrite(pin7, LOW);
  analogWrite(pin5, 250);
  digitalWrite(pin4, HIGH); 
}

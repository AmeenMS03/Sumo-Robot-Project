#include <Dabble.h>
#define INCLUDE_GAMEPAD_MODULE
#define CUSTOM_SETTINGS


int LEFT_WHEEL_FORWARD = 13;
int LEFT_WHEEL_BACKWARD = 12; 
int RIGHT_WHEEL_BACKWARD = 10; 
int RIGHT_WHEEL_FORWARD = 11; 


void setup() {
  pinMode(LEFT_WHEEL_BACKWARD, OUTPUT);
  pinMode(LEFT_WHEEL_FORWARD, OUTPUT);
  pinMode(RIGHT_WHEEL_FORWARD, OUTPUT);
  pinMode(RIGHT_WHEEL_BACKWARD, OUTPUT);

  Serial.begin(9600);

  Dabble.begin(9600,0,1);
}

void loop() {
  
  Dabble.processInput();
  
 if (GamePad.isUpPressed()) { 
      digitalWrite(LEFT_WHEEL_FORWARD, HIGH); 
      digitalWrite(LEFT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_FORWARD, HIGH); 
      delay (10);
      digitalWrite(LEFT_WHEEL_FORWARD, LOW); 
      digitalWrite(LEFT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_FORWARD, LOW); 
  }

  else if (GamePad.isDownPressed()) { 
      digitalWrite(LEFT_WHEEL_FORWARD, LOW); 
      digitalWrite(LEFT_WHEEL_BACKWARD, HIGH); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, HIGH); 
      digitalWrite(RIGHT_WHEEL_FORWARD, LOW); 
      delay (10);
      digitalWrite(LEFT_WHEEL_FORWARD, LOW); 
      digitalWrite(LEFT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_FORWARD, LOW); 
  }

    else if (GamePad.isRightPressed()) { 
      digitalWrite(LEFT_WHEEL_FORWARD, LOW); 
      digitalWrite(LEFT_WHEEL_BACKWARD, HIGH); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_FORWARD, HIGH); 
      delay (10);
      digitalWrite(LEFT_WHEEL_FORWARD, LOW); 
      digitalWrite(LEFT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_FORWARD, LOW); 

  }

  else if (GamePad.isLeftPressed()) { 
      digitalWrite(LEFT_WHEEL_FORWARD, HIGH); 
      digitalWrite(LEFT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, HIGH); 
      digitalWrite(RIGHT_WHEEL_FORWARD, LOW); 
      delay (10);
      digitalWrite(LEFT_WHEEL_FORWARD, LOW); 
      digitalWrite(LEFT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_BACKWARD, LOW); 
      digitalWrite(RIGHT_WHEEL_FORWARD, LOW);
  }

  else if (GamePad.isSquarePressed()) {
       digitalWrite(LEFT_WHEEL_FORWARD, LOW);
       digitalWrite(LEFT_WHEEL_BACKWARD, LOW);
       digitalWrite(RIGHT_WHEEL_BACKWARD, LOW);
       digitalWrite(RIGHT_WHEEL_FORWARD, LOW);
       
  }
  
}

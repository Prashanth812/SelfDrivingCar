char data = 0;            //Variable for storing received data
int IN1=8;
int IN2=9;
//int ENA=3;

int IN3=7;
int IN4=6;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  
  Serial.begin(9600);   //Sets the baud for serial data transmission                               
  }

void loop() {
  if(Serial.available() > 0){      // Send data only when you receive data:
    data = Serial.read();        //Read the incoming data & store into data
    Serial.print(data);          //Print Value inside data in Serial monitor
    Serial.print("\n");        
    if(data=='l'){//adelante left
      //analogWrite(ENA, 100);// motor speed  
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
    }else if (data=='r'){//atras right
     digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW); 
    }else if (data=='f'){ //forward
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
    }else if (data=='b'){//Backward
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
    }else if (data=='s'){//stop
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
    }
  }
}



#include <Servo.h>       
#define ServoPin 12      
#define LED 13           
#define sonar_Echo_Pin 8 
#define sonar_Trig_Pin 9 

#define IN1 4 
#define IN2 5 
#define IN3 6 
#define IN4 7

float left_distance;  
float right_distance; 

Servo myservo;

float sonar_detection() 
{
  float distance;                    
  digitalWrite(sonar_Trig_Pin, LOW); 
  delayMicroseconds(2);
  digitalWrite(LED, 1);
  digitalWrite(sonar_Trig_Pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(sonar_Trig_Pin, LOW);
  digitalWrite(LED, 0);
  distance = pulseIn(sonar_Echo_Pin, HIGH, 8000) / 58.00; 
  if (distance >= 130 || distance == 0)                   
  {
    distance = 130;
  }

  Serial.print(distance); 
  Serial.print("cm");     
  Serial.println();       
  delay(5);              

  return distance; 
}

void motion(int speed_A, int speed_B) 
{
  if (speed_A > 0) 
  {
    digitalWrite(IN1, 0);
    analogWrite(IN2, speed_A); 
  }
  else
  {
    digitalWrite(IN1, 1);
    analogWrite(IN2, 255 + speed_A); 
  }
  if (speed_B > 0)
  {
    analogWrite(IN3, speed_B); 
    digitalWrite(IN4, 0);
  }

  else
  {
    analogWrite(IN3, 255 + speed_B);
    digitalWrite(IN4, 1);
  }
}

void setup()
{
  Serial.begin(9600);   
  pinMode(IN1, OUTPUT); 
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(sonar_Trig_Pin, OUTPUT); 
  pinMode(sonar_Echo_Pin, INPUT);  

  myservo.attach(ServoPin); 
  myservo.write(180);       
  delay(500);
  myservo.write(0); 
  delay(500);
  myservo.write(73); 
  delay(500);
}

void loop()
{
  myservo.write(73); //positive

  if (sonar_detection() > 35)
  {
    motion(200, 200);
  }

  else
  {
    motion(0, 0);     
    myservo.write(0); 
    delay(500);
    right_distance = sonar_detection(); 
    myservo.write(180);                 
    delay(500);
    left_distance = sonar_detection();  
    myservo.write(73);                  
    if (left_distance > right_distance) 
    {
      motion(-255, 255); 
      delay(400);
    }
    else if (left_distance <= right_distance) 
    {
      motion(255, -255); 
      delay(400);
    }
  }
}

// Line Follower Robot Arduino Code
// Uses 2 IR sensors and L298N motor driver
// Author: Your Name

// Motor pins
const int ENA = 10; // Enable/speed motor A
const int IN1 = 9;  // Motor A
const int IN2 = 8;  // Motor A
const int ENB = 5;  // Enable/speed motor B
const int IN3 = 7;  // Motor B
const int IN4 = 6;  // Motor B

// IR sensor pins
const int IRSensorLeft = 2;
const int IRSensorRight = 3;

void setup() {
  // Motor pins as output
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // IR sensor pins as input
  pinMode(IRSensorLeft, INPUT);
  pinMode(IRSensorRight, INPUT);
}

void loop() {
  int left = digitalRead(IRSensorLeft);
  int right = digitalRead(IRSensorRight);

  if (left == LOW && right == LOW) {
    // Both sensors on white (line lost) - stop
    stopMotors();
  } else if (left == LOW && right == HIGH) {
    // Left sensor on white, right on black - turn right
    turnRight();
  } else if (left == HIGH && right == LOW) {
    // Left sensor on black, right on white - turn left
    turnLeft();
  } else if (left == HIGH && right == HIGH) {
    // Both sensors on black - go forward
    moveForward();
  }
}

void moveForward() {
  analogWrite(ENA, 150); // Adjust speed as needed
  analogWrite(ENB, 150);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnLeft() {
  analogWrite(ENA, 100);
  analogWrite(ENB, 150);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  analogWrite(ENA, 150);
  analogWrite(ENB, 100);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopMotors() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
} 
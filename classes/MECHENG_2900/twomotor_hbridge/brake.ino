// Function: brake()
// Created by: Michael Napoli
// Created on: 3/30/2020

void brake() {
  // disable drivers 
  digitalWrite(EN_LEFT, LOW);
  digitalWrite(EN_RIGHT, LOW);
  
  // toggle switches to brake
  digitalWrite(MC_LEFT_1, LOW);
  digitalWrite(MC_LEFT_2, LOW);
  digitalWrite(MC_RIGHT_1, LOW);
  digitalWrite(MC_RIGHT_2, LOW);
  
  // enable drivers
  digitalWrite(EN_LEFT, HIGH);
  digitalWrite(EN_RIGHT, HIGH);
}

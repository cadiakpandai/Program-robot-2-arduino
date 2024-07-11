void kecMaju(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[6], M1);
    digitalWrite(Motor[12], HIGH);
    digitalWrite(Motor[13], LOW);
    analogWrite(PWMmotor[7], M2);
    digitalWrite(Motor[14], LOW);
    digitalWrite(Motor[15], HIGH);
    analogWrite(PWMmotor[8], M3);
    digitalWrite(Motor[16], HIGH);
    digitalWrite(Motor[17], LOW);
    analogWrite(PWMmotor[9], M4);
    digitalWrite(Motor[18], HIGH);
    digitalWrite(Motor[19], LOW);   
}

void kecMundur(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[6], M1);
    digitalWrite(Motor[12], LOW);
    digitalWrite(Motor[13], HIGH);
    analogWrite(PWMmotor[7], M2);
    digitalWrite(Motor[14], HIGH);
    digitalWrite(Motor[15], LOW);
    analogWrite(PWMmotor[8], M3);
    digitalWrite(Motor[16], LOW);
    digitalWrite(Motor[17], HIGH);
    analogWrite(PWMmotor[9], M4);
    digitalWrite(Motor[18], LOW);
    digitalWrite(Motor[19], HIGH); 
}

void kecKanan(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[6], M1);
    digitalWrite(Motor[12], HIGH);
    digitalWrite(Motor[13], LOW);
    analogWrite(PWMmotor[7], M2);
    digitalWrite(Motor[14], HIGH);
    digitalWrite(Motor[15], LOW);
    analogWrite(PWMmotor[8], M3);
    digitalWrite(Motor[16], LOW);
    digitalWrite(Motor[17], HIGH);
    analogWrite(PWMmotor[9], M4);
    digitalWrite(Motor[18], HIGH);
    digitalWrite(Motor[19], LOW); 
}

void kecKiri(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[6], M1);
    digitalWrite(Motor[12], LOW);
    digitalWrite(Motor[13], HIGH);
    analogWrite(PWMmotor[7], M2);
    digitalWrite(Motor[14], LOW);
    digitalWrite(Motor[15], HIGH);
    analogWrite(PWMmotor[8], M3);
    digitalWrite(Motor[16], HIGH);
    digitalWrite(Motor[17], LOW);
    analogWrite(PWMmotor[9], M4);
    digitalWrite(Motor[18], LOW);
    digitalWrite(Motor[19], HIGH); 
}

void putarKanan(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[6], M1);
    digitalWrite(Motor[12], LOW);
    digitalWrite(Motor[13], HIGH);
    analogWrite(PWMmotor[7], M2);
    digitalWrite(Motor[14], LOW);
    digitalWrite(Motor[15], HIGH);
    analogWrite(PWMmotor[8], M3);
    digitalWrite(Motor[16], LOW);
    digitalWrite(Motor[17], HIGH);
    analogWrite(PWMmotor[9], M4);
    digitalWrite(Motor[18], HIGH);
    digitalWrite(Motor[19], LOW); 
}

void putarKiri(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[6], M1);
    digitalWrite(Motor[12], HIGH);
    digitalWrite(Motor[13], LOW);
    analogWrite(PWMmotor[7], M2);
    digitalWrite(Motor[14], HIGH);
    digitalWrite(Motor[15], LOW);
    analogWrite(PWMmotor[8], M3);
    digitalWrite(Motor[16], HIGH);
    digitalWrite(Motor[17], LOW);
    analogWrite(PWMmotor[9], M4);
    digitalWrite(Motor[18], LOW);
    digitalWrite(Motor[19], HIGH); 
}

void gripper(byte M1){
    analogWrite(PWMmotor[10], M1);
    digitalWrite(Motor[20], LOW);
    digitalWrite(Motor[21], HIGH);
}

void gripper_i(byte M1){
    analogWrite(PWMmotor[10], M1);
    digitalWrite(Motor[20], HIGH);
    digitalWrite(Motor[21], LOW);
}
//
//void naik(){
//  digitalWrite(ena,LOW);
//  digitalWrite(dir,LOW);
//  digitalWrite(pul,pulsa);
//  delayMicroseconds(intervalo);
//
//}
//
//void turun(){
//   digitalWrite(ena,LOW);
//  digitalWrite(dir,HIGH);
//  digitalWrite(pul,pulsa);
//  delayMicroseconds(intervalo);
//}

void enMotor_OFF ()
{
  analogWrite(PWMmotor[6], 0);
  analogWrite(PWMmotor[7], 0);
  analogWrite(PWMmotor[8], 0);
  analogWrite(PWMmotor[9], 0);
  analogWrite(PWMmotor[10], 0);
  digitalWrite(ena,HIGH);

}

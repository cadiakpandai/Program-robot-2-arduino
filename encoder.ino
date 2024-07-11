void encode(){
  
  counterX = enX.read();
  counterY = enY.read();

 jarakX = counterX * step;
  jarakY = counterY * step;
if (counterX != temp){
  // Serial.println(jarakX);
}
if (counterY != temp){
  // Serial.println(jarakY);
}
}

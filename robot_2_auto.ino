#include <Encoder.h>
#include <Servo.h>

Servo servoX;
Servo servoY;


int scan = 0;
long counterX, counterY = 0;  //This variable will increase or decrease depending on the rotation of encoder
long temp = -99;
#define pinX1 2
#define pinX2 3
#define pinY1 19
#define pinY2 18
#define ServoX 51
#define ServoY 53

#define pul     2   
#define ena     4
#define dir     5
const double pi = 3.14159265359;
const double diameter = 4.7;
const int pulse = 1610;
double jarakX = 0, jarakY = 0;
double kelilingL = pi * diameter;
double step = kelilingL / pulse;
bool pulsa=LOW;
int intervalo =100;

const int Motor[24] = { 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 32, 33, 34, 35, 36, 37, 38, 39 };
const int PWMmotor[12] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

Encoder enX(pinX1, pinX2);
Encoder enY(pinY1, pinY2);

int x1, y1 = 0;
int Dx1;
void setup() {
  servoX.attach(ServoX);
  servoY.attach(ServoY);
  Serial.begin(115200);
  Serial2.begin(115200);

  for (int m = 0; m <= 24; m++) {
    pinMode(Motor[m], OUTPUT);
  }
  for (int p = 0; p <= 12; p++) {
    pinMode(PWMmotor[p], OUTPUT);
  }
}

void loop() {
  String data = Serial2.readStringUntil('\n');

  // Pisahkan data menjadi dua nilai berdasarkan koma
  int commaIndex = data.indexOf(',');
  if (commaIndex != -1) {
    String x1_str = data.substring(0, commaIndex);
    String y1_str = data.substring(commaIndex + 1);

    // Konversi nilai x1 dan y1 ke tipe data int
    x1 = x1_str.toInt();
    y1 = y1_str.toInt();

    // Sekarang kita memiliki nilai x1 dan y1 dalam tipe data int
//    Serial.print("nilai x1 (int): ");
//    Serial.println(x1);
//    Serial.print("Nilai y1 (int): ");
//    Serial.println(y1);
  }

//servo x atas :20,bawah=100
//servo y atas :40,bawah=0
encode();

if (scan==0){ ////langkah 1
servoX.write(80);
servoY.write(0);
Serial.print(jarakY);
Serial.print("||");
Serial.println(jarakX);


    if (jarakY>=0 && jarakY <100){
      kecMaju(60,60,60,60);
      
    }
    else if (jarakY>100){
       enMotor_OFF ();
    }
}

else if (scan==1){
 
}




}

//Mpu6050 
#include<Wire.h> 
#include<MPU6050_tockn.h> 
MPU6050 mpu(Wire); 
void setup()  
{ 
  Serial.begin(9600); 
  Wire.begin(); 
  mpu.begin(); 
  mpu.calcGyroOffsets(true); 
} 
 
void loop()  
{ 
  mpu.update(); 
  Serial.println("Angle X :"); 
  Serial.println(mpu.getAngleX()); 
  Serial.println("Angle Y :"); 
  Serial.println(mpu.getAngleY()); 
  Serial.println("Angle Z :"); 
  Serial.println(mpu.getAngleZ()); 
  delay(50); 
} 
 

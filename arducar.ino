#define BLYNK_PRINT Serial 
#include <ESP8266WiFi.h> 
#include <BlynkSimpleEsp8266.h> 

// You should get Auth Token in the Blynk App. 
// Go to the Project Settings (nut icon). 
char auth[] = "uUTyuB64u0kLvPi0Xy_Hxuok3S_F2eTe"; 

// Your WiFi credentials. 
// Set password to "" for open networks. 
char ssid[] = "Kopatel"; 
char pass[] = "dttb5381";  

int PWMA=D2; //Right side 
int PWMB=D5; //Left side 
int DA=D3; //Right reverse 
int DB=D4; //Left reverse 

int MAX_PWM_VOLTAGE = 100;

void setup() {
     Serial.begin(9600); 
     Blynk.begin(auth, ssid, pass); 
     pinMode(PWMA, OUTPUT);
     pinMode(PWMB, OUTPUT);
     pinMode(DA, OUTPUT);
     pinMode(DB, OUTPUT);
}

void loop(){
     Blynk.run();
}

// Handling Joystick data 
BLYNK_WRITE(V0) {
     int x = param.asInt();
     if(x==1){
          digitalWrite(PWMA, MAX_PWM_VOLTAGE); 
          digitalWrite(DA, LOW); 
          
          digitalWrite(PWMB, MAX_PWM_VOLTAGE); 
          digitalWrite(DB, LOW); 
     } else if(x==0){
          digitalWrite(PWMA, LOW); 
          digitalWrite(DA, LOW); 
         
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, LOW); 
     }
}
BLYNK_WRITE(V1) {
     int x = param.asInt();
     if(x==1){
          digitalWrite(PWMA, LOW); 
          digitalWrite(DA, MAX_PWM_VOLTAGE); 
          
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, MAX_PWM_VOLTAGE); 
     } else if(x==0){
          digitalWrite(PWMA, LOW); 
          digitalWrite(DA, LOW); 
         
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, LOW); 
     }
}
BLYNK_WRITE(V2) {
     int x = param.asInt();
     if(x==1){
          digitalWrite(PWMA, MAX_PWM_VOLTAGE); 
          digitalWrite(DA, LOW); 
          
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, LOW); 
     } else if(x==0){
          digitalWrite(PWMA, LOW); 
          digitalWrite(DA, LOW); 
         
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, LOW); 
     }
}
BLYNK_WRITE(V3) {
     int x = param.asInt();
     if(x==1){
          digitalWrite(PWMA, LOW); 
          digitalWrite(DA, LOW); 
          
          digitalWrite(PWMB, MAX_PWM_VOLTAGE); 
          digitalWrite(DB, LOW); 
     } else if(x==0){
          digitalWrite(PWMA, LOW); 
          digitalWrite(DA, LOW); 
         
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, LOW); 
     }
}
BLYNK_WRITE(V4) {
     int x = param.asInt();
     if(x==1){
          digitalWrite(PWMA, MAX_PWM_VOLTAGE); 
          digitalWrite(DA, LOW); 
          
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, MAX_PWM_VOLTAGE); 
     } else if(x==0){
          digitalWrite(PWMA, LOW); 
          digitalWrite(DA, LOW); 
         
          digitalWrite(PWMB, LOW); 
          digitalWrite(DB, LOW); 
     }
}
BLYNK_WRITE(V5) {
     MAX_PWM_VOLTAGE = param.asInt();
}

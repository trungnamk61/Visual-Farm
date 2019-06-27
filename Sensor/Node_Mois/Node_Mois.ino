#include <TimerOne.h>
#include <SHT1x.h>
 
// Specify data and clock connections and instantiate SHT1x object
#define dataPin  A4
#define clockPin A5
int cnt=1;
int temp_c;
int humidity;
SHT1x sht1x(dataPin, clockPin);
String cmd;
int moisps;
int output_value;
int measurePin = A1;
int mac=60;
//float Vo;
void serialEventRun(void) {
  if (Serial.available()) serialEvent();
}
void setup() {
  // put your setup code here, to run once:
  Timer1.initialize(6000000000);
  Timer1.attachInterrupt(sendMois); 
  Serial.begin(9600);
  pinMode(A1,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  String join= "#LJ:"+String(mac,DEC);
  Serial.println(join);
}
void loop() {
	output_value= analogRead(measurePin);
//  Serial.println(measurePin);
	moisps = map(output_value, 1023, 290, 0, 100);
  Serial.println(moisps);
  temp_c = sht1x.readTemperatureC()*100;
  humidity = sht1x.readHumidity()*100;
//  delay(1000);
}
void serialEvent(){
  
  while(Serial.available()>0){
    cmd=Serial.readString();
    Serial.print(cmd);
  }
  sendData(cmd);
}
int checkcode(String cmd)
{
  if(cmd.substring(2) == "500$")return 1;
  if(cmd.substring(2) == "600$")return 2;
  if(cmd.substring(2) == "610$")return 3;
  if(cmd.substring(2) == "620$")return 4;
  if(cmd.substring(2) == "700$")return 5;
  if(cmd.substring(2) == "000$")return 6;
  return 0;
}

void sendData(String cmd)
{
  int macrq= cmd.substring(0,2).toInt();
  if(macrq!=mac)return;
  switch(checkcode(cmd))
  {
    //dustDensity = readDust();
    case 1:
    {
      String dustDensity1 = "#LR:" +String(mac,DEC)+ String(moisps,HEX) ;
      Serial.println(dustDensity1);
      break;
    }
    case 6:{
      String TH ="#LD:"+String(mac,DEC)+String(temp_c,DEC)+String(humidity,DEC);
      Serial.println(TH);
      break;
    }
    default:
    {
      break;
    }
  }
}
void sendMois(){
  if(cnt%2){
      String dustDensity1 = "#LB:" +String(mac,DEC)+ String(moisps,HEX) ;
      Serial.println(dustDensity1);
      cnt++;
      }
  else{
      String TH ="#LA:"+String(mac,DEC)+String(temp_c,DEC)+String(humidity,DEC);
      Serial.println(TH);
      cnt++;
    }
}

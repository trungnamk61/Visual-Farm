
String st;
String cmd;
int mac=90;
//float Vo;
void serialEventRun(void) {
  if (Serial.available()) serialEvent();
}
void setup() {
  // put your setup code here, to run once:
  pinMode(A5,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  Serial.begin(9600);
  String join= "#LJ:"+String(mac,DEC);
  Serial.println(join);

}
void loop() {
  //Serial.println("hic");
//  Serial.println("#LJ:90");
  //Serial.println(dustDensity);
  //String dustDensity1 = "#LR" + String(dustDensity) +"10";
  //Serial.println(dustDensity1);
//  Serial.println("#LR10010");
//  delay(100);
}
void serialEvent(){
  
  while(Serial.available()>0){
    cmd=Serial.readString();
//    Serial.print(cmd);
  }
  check(cmd);
}
int checkcode(String cmd)
{
  if(cmd.substring(2) == "630$")return 3;
  if(cmd.substring(2) == "640$")return 4;
  if(cmd.substring(2) == "610$")return 1;
  if(cmd.substring(2) == "620$")return 2;
  return 0;
}
void check(String cmd){
  if(cmd.substring(0,2).toInt()!=mac)return;
  switch(checkcode(cmd)){
  case 1:
  	digitalWrite(A4,HIGH);
    delay(1000);
    st= "#LS:"+String(mac,DEC)+"01";
  	Serial.println(st);
  	break;
  case 2:
  	digitalWrite(A4,LOW);
  	st= "#LS:"+String(mac,DEC)+"02";
    delay(1000);
    Serial.println(st);
  	break;
  case 3:
  	digitalWrite(A5,HIGH);
  	st= "#LS:"+String(mac,DEC)+"03";
    delay(1000);
    Serial.println(st);
  	break;
  case 4:
  	digitalWrite(A5,LOW);
  	st= "#LS:"+String(mac,DEC)+"04";
    delay(1000);
    Serial.println(st);
  	break;
  default:
  	break;
  
  }
}

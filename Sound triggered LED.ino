int soundSensor=2;
int LED=4;
boolean LEDStatus=false;
void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);
}
void loop() {
  int SensorData=digitalRead(soundSensor); 
  if(SensorData==1){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
    }
  }
 }
//hello I am commenting in the feild and my name is matt
//yo yo yo it's Gabe here putting text on line 23

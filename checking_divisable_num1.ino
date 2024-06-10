void setup(){
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()){
    String inputString="";
    while(Serial.available()){
      char incomingChar=Serial.read();
      inputString+=incomingChar;
      delay(2);
    }
    int number=inputString.toInt();
    if(number!=0||inputString.startsWith("0")){
      if(number%2==0&&number%3==0){
        Serial.println("The num id divisable by both 2 & 3");
      }
      else{
        Serial.println("*");
      }
    }
    else{
      Serial.print("Invalid  Input");
    }
  }}
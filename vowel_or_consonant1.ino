// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
    char inputChar=Serial.read();
    inputChar=tolower(inputChar);
    if(isalpha(inputChar)){
      if(inputChar=='a'||inputChar=='e'||inputChar=='i'||inputChar=='o'||inputChar=='u'){
        Serial.println("IT is a vowel");
      }
      else{
        Serial.println("It is a consonant");
                       }
                       }
                       else{
                         Serial.println("Invalid Input");
                       }}
}
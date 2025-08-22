while(Serial.available())
{
  delay(50);
char c=Serial.read();
readString+=c;
}
if(readString.length()>0){
Serial.printIn(readString);
if (readString=="ON"){
  digitalWrite(LED_BUILTIN, HIGH);
}
String readString
readString="";
}
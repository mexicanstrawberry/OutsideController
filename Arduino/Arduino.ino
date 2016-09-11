void setup() {
   pinMode(2, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(2)){
    noTone(13);
  }else{
    tone(13,10);
  }
}

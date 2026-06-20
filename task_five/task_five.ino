int startValue = 5;
int ledPin =13;

void flashLed(int times){
  int blinkCount =0;

  while(blinkCount<times){
    digitalWrite(ledPin,HIGH);
    delay(300);

    digitalWrite(ledPin,LOW);
    delay(300);

    blinkCount++;
    
    }
  }


void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

  Serial.println("======Smart coundown starting=====");
  int count = startValue;

    while(count >=1){
      Serial.print("count:");
      Serial.println(count);


      flashLed(count);
      delay(1000);
      count = count -1;
      }
         Serial.println("==========Countdown complete=======");

}

void loop() {
  // put your main code here, to run repeatedly:

}

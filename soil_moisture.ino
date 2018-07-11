const int sensor_pin = A0;	//* პინი რომელზეც უნდა დაერთდეს მოწყობილობის ლოგიკური ფეხი ჩვენ შემთხვევაში  AO სადაც წერია

void setup() {
  Serial.begin(9600);	/* სერიალ მონიტორინგისთვის პორტი */
}

void loop() {
  float moisture_percentage;
  int sensor_analog;
  sensor_analog = analogRead(sensor_pin);
  moisture_percentage = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
  Serial.print("ტენიანობის პროცენტულობა = ");
  Serial.print(moisture_percentage);
  Serial.print("%\n\n");
  delay(1000);
}

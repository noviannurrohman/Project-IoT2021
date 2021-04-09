#define ledRed 16 //D0 pin LED
#define ledGreen 5 //D1 pin LED
void setup()
{
  Serial.begin(9600);
 // atur pin digital sebagai output
 pinMode(ledRed, OUTPUT);
 pinMode(ledGreen, OUTPUT);
 pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
 // 3 dits (3 titik atau huruf S)
 for (int x=0; x<3; x++) {
 digitalWrite(ledGreen, HIGH); // LED nyala
 delay(150); // delay selama 150ms
 digitalWrite(ledGreen, LOW); // LED mati
 Serial.println("LED Merah Berkedip");
 delay(100); // delay selama 150ms
 }
 delay(100);
 // 3 dahs (3 garis atau huruf O)
 for (int x=0; x<3; x++) {
 digitalWrite(ledGreen, HIGH); // LED nyala
 delay(400); // delay selama 400ms
 digitalWrite(ledGreen, LOW); // LED mati
 delay(100); // delay selama 100ms
 }
 // 100ms delay to cause slight gap between letters
 delay(100);
 // 3 dits again (3 titik atau huruf S)
 for (int x=0; x<3; x++) {
 digitalWrite(ledGreen, HIGH); // LED nyala
 delay(150); // delay selama 150ms
 digitalWrite(ledGreen, LOW); // LED mati
 delay(100); // delay selama 100ms
 }
 // wait 5 seconds before repeating the SOS signal
 delay(5000);
  
 // 3 dits (3 titik atau huruf S)
 for (int x=0; x<3; x++) {
 digitalWrite(ledRed, HIGH); // LED nyala
 delay(150); // delay selama 150ms
 digitalWrite(ledRed, LOW); // LED mati
 Serial.println("LED Hijau Berkedip");
 delay(100); // delay selama 150ms
 }
 delay(100);
 // 3 dahs (3 garis atau huruf O)
 for (int x=0; x<3; x++) {
 digitalWrite(ledRed, HIGH); // LED nyala
 delay(400); // delay selama 400ms
 digitalWrite(ledRed, LOW); // LED mati
 delay(100); // delay selama 100ms
 }
 // 100ms delay to cause slight gap between letters
 delay(100);
 // 3 dits again (3 titik atau huruf S)
 for (int x=0; x<3; x++) {
 digitalWrite(ledRed, HIGH); // LED nyala
 delay(150); // delay selama 150ms
 digitalWrite(ledRed, LOW); // LED mati
 delay(100); // delay selama 100ms
 }
 // wait 5 seconds before repeating the SOS signal
 delay(5000);

 // 3 dits (3 titik atau huruf S)
 for (int x=0; x<3; x++) {
 digitalWrite(LED_BUILTIN, HIGH); // LED nyala
 delay(150); // delay selama 150ms
 digitalWrite(LED_BUILTIN, LOW); // LED mati
 Serial.println("LED Biru Berkedip");
 delay(100); // delay selama 150ms
 }
 delay(100);
 // 3 dahs (3 garis atau huruf O)
 for (int x=0; x<3; x++) {
 digitalWrite(LED_BUILTIN, HIGH); // LED nyala
 delay(400); // delay selama 400ms
 digitalWrite(LED_BUILTIN, LOW); // LED mati
 delay(100); // delay selama 100ms
 }
 // 100ms delay to cause slight gap between letters
 delay(100);
 // 3 dits again (3 titik atau huruf S)
 for (int x=0; x<3; x++) {
 digitalWrite(LED_BUILTIN, HIGH); // LED nyala
 delay(150); // delay selama 150ms
 digitalWrite(LED_BUILTIN, LOW); // LED mati
 delay(100); // delay selama 100ms
 }
 // wait 5 seconds before repeating the SOS signal
 delay(5000);
}

/*
   TUTORIAL LED BERKEDIP (BLINK) PADA ARDUINO
   
   Pinout pada shield :
   D4 -> Led Merah
   D5 -> Led Hijau
   D6 -> Led Biru
   D7 -> Led Kuning
   
*/

#define pinLed 4 //definisikan pinLed adalah 4, led merah ada pada D4

void setup() {
  pinMode(pinLed, OUTPUT); //set menjadi output
}

void loop() {
  digitalWrite(pinLed, HIGH); //menyalakan led (memberi tegangan 5V)
  delay(1000); //jeda waktu 1 detik, akan tetap menyala selama 1 detik
  digitalWrite(pinLed, LOW); //mematikan led (memberi tegangan 0V)
  delay(1000); //jeda waktu 1 detik, akan tetap mati selama 1 detik
}

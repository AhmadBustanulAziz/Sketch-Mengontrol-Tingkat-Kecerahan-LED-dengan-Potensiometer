
/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 13 Oktober 2021
Deskripsi : Sketch Mengontrol Tingkat Kecerahan LED dengan Potensiometer

Sketch dan rangkaian diambil dari buarduino.web.id
 */

int led = 6; // Memilih pin digital untuk lampu LED 
int pinPot = 0; // Memilih pin analog untuk VR
int potVal = 0; // Tempat untuk menerima nilai tegangan dari VR
     
void setup() { 
   pinMode(led, OUTPUT); // Mengatur lampu LED sebagai output 
} 

void loop() { 
    potVal = analogRead(pinPot); // terima masukan nilai dari VR
    potVal = map(potVal, 0, 1023, 0, 255); // ubah nilai (0-1023) jadi (0-255) 
    analogWrite(led, potVal); // ubah nilai VR untuk mengatur kecerahan
}  

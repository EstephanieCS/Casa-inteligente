#include <Adafruit_SH1106.h>//clase

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);//modelo para declarar la pantalla, instancia Adafruit

#if (SH1106_LCDHEIGHT != 64) //altura de la pantalla
#error("Height incorrect, please fix Adafruit_SH1106.h!");//si sobre pasa la altura de 64 marca un error
#endif


int ledh = 13; //habitacion 1
int ledhh = 12; //habitacion 2
int ledb = 11; //baño
int leds = 10; //sala
int ledc = 9 ; //comedor 
int ledcs = 8 ; //cocina
int tiempo = 200;
char dato;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);

  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(15, 15);
  display.println("Casa Inteligente");
  display.setTextSize(1);
  display.setCursor(15, 40);
  display.println("Con Servidor Web");
  display.display();
}

void loop() {
  if(Serial.available() > 0)
  {
    dato = Serial.read();
    ///////////////////////////////////////////
    if (dato == 'A')
    {
      digitalWrite(13,HIGH);  //habitacion 1 ON

      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(25, 15);
      display.println("Habitacion 1");
      display.setCursor(35, 40);
      display.println("Endendida");
      display.display();
    }
    if (dato == 'B')
    {
      digitalWrite(13,LOW);   //habitacion 1 OFF
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(25, 15);
      display.println("Habitacion 1");
      display.setCursor(35, 40);
      display.println("Apagada");
      display.display();
    }
     //////////////////////////////////////////
     if (dato == 'C')
    {
      digitalWrite(12,HIGH);  //habitacion 2 ON
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(25, 15);
      display.println("Habitacion 2");
      display.setCursor(35, 40);
      display.println("Endendida");
      display.display();
    }
    if (dato == 'D')
    {
      digitalWrite(12,LOW);   //habitacion 2 OFF
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(25, 15);
      display.println("Habitacion 2");
      display.setCursor(35, 40);
      display.println("Apagada");
      display.display();
    }
    ///////////////////////////////////////////
     if (dato == 'E')
    {
      digitalWrite(11,HIGH);  //baño ON
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 25);
      display.println("Bano Encendido");
      display.display();
    }
    if (dato == 'F')
    {
      digitalWrite(11,LOW);   //baño OFF
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 25);
      display.println("Bano Apagado");
      display.display();
    }
    //////////////////////////////////////////
     if (dato == 'G')
    {
      digitalWrite(10,HIGH);  //sala ON
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(25, 20);
      display.println("Sala Encendida");
      display.display();
    }
    if (dato == 'H')
    {
      digitalWrite(10,LOW);   //sala OFF
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(25, 20);
      display.println("Sala Apagada");
      display.display();
    }
    //////////////////////////////////////////
     if (dato == 'V')
    {
      digitalWrite(9,HIGH);  //comedor ON
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 20);
      display.println("Comedor Encendido");
      display.display();
    }
    if (dato == 'Z')
    {
      digitalWrite(9,LOW);   //comedor OFF
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 20);
      display.println("Comedor Apagado");
      display.display();
    }
    /////////////////////////////////////////
     if (dato == 'K')
    {
      digitalWrite(8,HIGH);  //cocina ON
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 20);
      display.println("Cocina Encendida");
      display.display();
    }
    if (dato == 'L')
    {
      digitalWrite(8,LOW);   //cocina  OFF
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 20);
      display.println("Cocina Apagada");
      display.display();
    }
    //////////////////////////////////////
     if (dato == 'O')
    {
      digitalWrite(13,HIGH);  //casa ON
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH);

      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 20);
      display.println("Casa Encendida");
      display.display();
    }
    if (dato == 'P')
    {
      digitalWrite(13,LOW);   //casa OFF
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
      digitalWrite(8,LOW);

      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(20, 20);
      display.println("Casa Apagada");
      display.display();
    }
  }


}
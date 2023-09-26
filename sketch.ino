

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  //

void setup() {
  // Inicializar el LCD
  lcd.init();
  
  //Encender la luz de fondo.
  lcd.backlight();
  
 
}

void loop() {
  lcd.setCursor(0, 0);
   // Escribimos el Mensaje en el LCD.
  lcd.print("Hola Mundo");
   // Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
  lcd.setCursor(0, 1);
  int tiempo=millis()/1000;
   // Escribimos el número de segundos trascurridos
  lcd.print(tiempo);
   lcd.print(" Segundos");
  delay(500);
  //if(tiempo>millis()/3000){
    //lcd.clear();
    //delay(5000);}
 
}
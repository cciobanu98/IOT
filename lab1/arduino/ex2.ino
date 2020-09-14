#include <Led.h>
#include <Serial.h>

#define LED_PIN 13
Led led(LED_PIN);
char c;  
void setup()
{
  Serial.begin(9600);
  setStream();
}

void loop()
{
  scanf(" %c", &c);
      if (c == '0')
      {
        led.off();
        printf("Lef off\n");
      }
       else if (c == '1')
       {
        led.on();
        printf("Led on\n");
       }
}

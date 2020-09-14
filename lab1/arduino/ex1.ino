#include <Button.h>
#include <Led.h>

#define BUTTON_PIN 12
#define LED_PIN 13

Led led(LED_PIN);
Button button(BUTTON_PIN);
int newButtonState = LOW;
int oldButtonState = LOW;

int main()
{
  while(true)
  {
    newButtonState = button.state();
    if (newButtonState == HIGH && oldButtonState == LOW) 
    {
      led.toggle();
    }
    oldButtonState = newButtonState;
  }
}

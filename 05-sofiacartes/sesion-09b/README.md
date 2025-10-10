# sesion-09b
## Trabajo en clases 

- r   ~ 9 res 1k 
- 100k o+ gnd
- transistor 
- 255 máximo motor 
- cuando reconozca reproduz
  
### Datasheet e informaciones relevantes para utilizar los componentes

Datasheet y página motor vibrador joystick

<https://www.digikey.com/en/products/detail/vybronics-inc/VJQ24-35K270B/7732324>

<chrome-extension://efaidnbmnnnibpcajpcglclefindmkaj/https://www.mouser.com/datasheet/2/321/28822-Vibration-Motor-Capsule-Documentation-370386.pdf?srsltid=AfmBOopCm5vTXsDBh9L5Jpoopf-v8sNSxtuI31pFvqmlfscw5TyvyKIX&utm_source=chatgpt.com>

prueba en clases 

```cpp
int pinMotor = 9;
int intensidad = 0;

void setup(){
  pinMode(pinMotor, OUTPUT);
}

void loop(){

  intensidad = intensidad + 1;
  analogWrite(pinMotor, intensidad);

  if (intensidad >= 255){
    intensidad = 0;
  }
  delay(10);
}
```

Datasheet sensor de proximidad HCSR04 

<https://www.alldatasheet.com/datasheet-pdf/view/1132204/ETC2/HCSR04.html>

servomotor 
 
 <https://www.alldatasheet.es/datasheet-pdf/view/1572383/ETC/SG90.html>

calculador de resistencias 

 <https://www.digikey.com/es/resources/conversion-calculators/conversion-calculator-resistor-color-code>

 

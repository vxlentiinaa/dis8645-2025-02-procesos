# sesion-07b
Buscar semejanzas o diferencias con otros proyectos.
Buscar referentes de internet por cada persona
- Lenguaje (palabras que queremos usar para el proyecto)
- Código
- Materialidad
- Documentación (videos o similares)


Lenguaje:
- Vib-Ribbon voice lines //La idea es que sea un sintetizador
  
https://www.youtube.com/watch?v=ZXKA5LdcIKQ&list=PL3sQctNePEDGaY9TIdphta7YMYwcNa4pJ&index=7

- Cristianghost //Pero que hable como el Cristian

https://www.youtube.com/watch?v=zwdaaecIV38

Aunque nuestro robot no reproducira voz... bueno, ya que.

Codigo:
- Brazo robotico en el cual se utiliza servo motores para la fabricación

https://projecthub.arduino.cc/milespeterson101/arduino-robotic-arm-8b8601

- Robot que se mueve con la proximidad de la mano

https://www.youtube.com/watch?v=yAV5aZ0unag 

Materialidad:
- Robot hecho con impresión 3D

https://www.ottodiy.com 

- Robot hecho con madera MDF

https://eduboticsperu.com/tienda/kit-robot-otto-mdf/

Documentación:

https://projecthub.arduino.cc/RucksikaaR/simple-2-axis-servo-robotic-arm-controlled-by-mpu-6050-0a31a3
https://projecthub.arduino.cc/roboattic_lab/build-your-own-object-tracking-4-dof-robotics-arm-with-arduino-dd36ba
https://arxiv.org/abs/2309.11594 


---

Trabajo de clases:

Se intentó usar los diferentes componentes que nos compraron y llegamos a 2 versiones del pseudocodigo.

Con ello también llegamos a un codigo que fue traspasado a wokwi que utiliza el sensor de movimiento ultrasonico

https://wokwi.com/projects/304444938977804866

En unas horas buscare diferentes paginas con codigo para ver como usar el sensor de temperatura.

(https://www.circuitbasics.com/arduino-thermistor-temperature-sensor-tutorial/)

```cpp
int ThermistorPin = 0;
int Vo;
float R1 = 10000;
float logR2, R2, T, Tc, Tf;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

void setup() {
Serial.begin(9600);
}

void loop() {

  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  Tc = T - 273.15;
  Tf = (Tc * 9.0)/ 5.0 + 32.0; 

  Serial.print("Temperature: "); 
  Serial.print(Tf);
  Serial.print(" F; ");
  Serial.print(Tc);
  Serial.println(" C");   

  delay(500);
}
```

(https://www.geeksforgeeks.org/electronics-engineering/arduino-temperature-sensor/)

```cpp
float temp;
int tempPin = 0;

void setup() {
   Serial.begin(9600);
}

void loop() {
   temp = analogRead(tempPin);
   // read analog volt from sensor and save to variable temp
   temp = temp * 0.48828125;
   // convert the analog volt to its temperature equivalent
   Serial.print("TEMPERATURE = ");
   Serial.print(temp); // display temperature value
   Serial.print("*C");
   Serial.println();
   delay(1000); // update sensor reading each one second
}

```

Junto al equipo llegamos a buscar info sobre el sensor de temperatura pero el problema era que el propio sensor no respondia //estaba malo
Por lo tanto cualquier codigo llega a servir en estos casos para nuestro proyecto

---

Para este punto probamos el sensor ultrasonico:

(https://wokwi.com/projects/304444938977804866)

---

Se me olvidó subir el propio diagrama de flujo, pero aquí lo dejo (esta dibujado de manera digital):

![Diagrama de Flujo](https://raw.githubusercontent.com/Coff4/dis8645-2025-02-procesos/refs/heads/main/23-Coff4/sesion-07b/imagenes/DiagramaFlujo.png)



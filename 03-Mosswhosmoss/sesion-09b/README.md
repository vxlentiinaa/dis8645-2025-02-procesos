# sesion-09b

HOLA_HOY_NO_VINE_ESTOY_EN_EL_MATRIMONIO_DE_MI_HERMANA!!!!!!!_YUPII

## Dudas increibles para la clase :-9

Hola, estoy "adelantando" trabajo, unas duditas sobre unos errores que me esta dando el código :-(

### cita código

basicamente hagarre el avance que hizo mi compañero [SebastianSaez1003](https://github.com/SebastianSaez1003/dis8645-2025-02-procesos) e intente traspasar un if que se encontraba en el void loop del archivo .ino a el archivo del acuadorServo.cpp y acuadorServo.h 

Se veia asi en la versión 0_4_2
```cpp
  if (servoTemp) {
    // se realizara todo lo presente en
    // la instacia de moverBrazo
    actuadorServo.moverBrazo();
  }
```
Para la version 0_4_3 intente hacer esto en el archivo acuadorServo.h 

```cpp
servoTemp = sensorTemp.temperatura > 15;
  // ponerle nombre a función para que 
  // el servo funcione cuando reaccione
  // a la temp especificada
  bool servoTemp;
```
y en el archivo acuadorServo.cpp hice esto dentro de la clase ActuadorServo::ActuadorServo

```cpp
if (servoTemp) {
    // se realizara todo lo presente en
    // la instacia de moverBrazo
    actuadorServo.moverBrazo();
  }
```
Me sale este error :-(
![error](imagenes/robotFriolento_0_4_3_error.png)

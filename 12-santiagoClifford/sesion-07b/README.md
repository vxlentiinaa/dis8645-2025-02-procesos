# sesion-07b

## clase 14 - 26-sept

- [velocidad del sonido](https://es.wikipedia.org/wiki/Velocidad_del_sonido)

- [ultrasonido e infrasonido](https://www.lpi.tel.uva.es/~nacho/docencia/ing_ond_1/trabajos_03_04/infra_y_ultra/infrasonidos.htm)

### modulo MAX4466
<https://lastminuteengineers.com/max4466-arduino-tutorial>

- captura ondas de sonido en el rango de 20Hz-20kHz


- datasheets:
   - [servo](http://www.ee.ic.ac.uk/pcheung/teaching/DE1_EE/stores/sg90_datasheet.pdf)
   - [modulo mic](https://www.analog.com/en/products/max4466.html)

### links 
- [dart](https://dart.dev)
- [mermaid](https://mermaid.js.org)

#### avance masacre

```cpp
int valueMic1;
int valueMic2;

if(valueMic1>valueMic2){
 origenSonido = valueMic1-valueMic2;
 apuntacionServo = map(origenSonido, 0, 1023, 10, 170); 
}else if(valueMic1<valueMic2){
 origenSonido = valueMic2-valueMic1;
 apuntacionServo = map(origenSonido, 0, 1023, 170, 10); 
}

```
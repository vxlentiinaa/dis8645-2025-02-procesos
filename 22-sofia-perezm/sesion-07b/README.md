# sesion-07b

26/09/25

## Proyecto 02: Investigación y seudocódigo

Es posible comprimir un mismo proyecto en su totalidad mediante arduino y mandarlo a otra persona.

Crear los seudo códigos de nuestro proyecto.

Usaremos 2 servomotores. 1 para controlar ambos párpados, y otro para controlar la rotación de la estructura. Ambos servomotores serán de 90° 

Seudo código:

```cpp
int valorMic;
void setup() {
  Serial.begin(9600);
}

void loop() {
valorMic = analogRead(A0);
valorMic = constrain(valorMic, 511, 1023);
Serial.println(valorMic);
delay(500);
}
```

## Investigación de la audicion bineural.

La binauralidad se entiende como la capacidad del cerebro para procesar la información que llega desde los dos oídos y así construir una percepción espacial del sonido.

Diferencias interaurales de tiempo (ITD): el sonido llega antes a un oído que al otro. El cerebro mide ese micro–desfase para ubicar la dirección (muy útil para frecuencias bajas).

Diferencias interaurales de nivel (ILD): la cabeza bloquea parte del sonido, por lo que llega más fuerte a un oído que al otro (especialmente en frecuencias altas).

Efecto del pabellón auditivo: la forma del oído externo modifica el sonido según el ángulo, ayudando a percibir altura y profundidad.

Gracias a esto el cerebro logra:

Localizar la fuente sonora en el espacio.

Percibir distancia y tridimensionalidad.

Separar voces o sonidos en ambientes ruidosos.

En lo artístico-tecnológico es el uso creativo de la escucha con dos oídos para generar experiencias inmersivas y espaciales.

La binauralidad es una función neuroacústica que convierte las pequeñas diferencias entre lo que oye cada oído en una experiencia sonora 3D natural.

Esta investigación nos permitirá entender que es lo que "escucha" y como funciona nuestro proyecto al tener este 3 microfonos y 2 servomotores que le darán la sensación de que está buscando de donde viene el sonido, mirando especificamente hacia el lugar de donde proviene el sonido.

![Open_Binaural](./imagenes/openbinaural.webp)

fuente -> OpenBinaural by CarlosGS https://github.com/CarlosGS/OpenBinaural?tab=readme-ov-file

hacer un diagrama de flujo de como funciona el proyecto

documentar funcionamiento de cableado y código


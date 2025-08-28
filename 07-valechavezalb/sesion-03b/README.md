
# Clase 6

Martes 26 de agosto de 2025

## Avances del proyecto número 1

### Selector de poemas

Para el encargo utilizaremos el selector de poemas para contar una historia, abordando momentos como:

1. **El encuentro**
   "Si me miras, yo me vuelvo hermosa" (Gabriela Mistral. Ternura).
2. **El amor**
   "Quiero hacer contigo
lo que la primavera hace con los cerezos". (Pablo Neruda, Veinte poemas de amor y una canción desesperada).
3. **El quiebre**
   "Se rompió mi voz
cuando más tuya era". (Dulce María Loynaz, Poemas sin nombre).
4. **El olvido**
   "Es tan corto el amor,
y tan largo el olvido". (Pablo Neruda, Veinte poemas de amor y una canción desesperada).
5. **La huella**
   "De todo quedó un poco.
De tu luz y de mi sombra". (César Vallejo, Poemas humanos).

- La idea es que al apretar el botón vaya cambiando el poema de acuerdo al momento de la historia
- Se pueden usar dos botones para que hacer que vaya hacia atrás y hacia adelante.
- el potenciómetro se puede usar para ir pasando las imágenes.

#### Imágenes a usar

#### const unsigned char ojos[] PROGMEM = { ... }

Para poner las imágenes como bitmap (bytes),
Luego se dibuja con **drawBitmap (0, 0, ojos, 128, 64, WHITE);** (posición X=0, Y=0, ancho=128, alto=64.

### USO DE POTENCIÓMETRO Y BOTÓN EN ARDUINO

Potenciómetro:

- se conecta de forma paralela al espacio que hay entre los dos espacios de hoyitos, esto nos permite que los pines del potenciómetro queden en distinto lugar, mientras que si se inserta perpendicularmente al espacio de enmedio, queda como todo un mismo lugar, eléctricamente es el mismo lugar.
- vcc a 5v (cable rojo o naranjo) conexión a la pantalla
- vcc a 5v (cable naranjo) para conexión potenciómetro.
- cuando el potenciómetro va a tanto, es la velocidad del poema.
- si el valor del potenciómetro es menor que trescientos, se mostrará el verso uno. Y así ir asignando valores para cada verso o cada poema de los moementos d

- la función debe ir en un rango

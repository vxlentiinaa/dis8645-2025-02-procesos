# sesion-06b

12-09-2025

## Apuntes 

Teloneo

- ffmepg: Colección de software libre que puede grabar, convertir y hacer streaming de audio y más.
- mp4: Es un archivo para almacenar los formatos audiovisuales específicados por ISO/IEC.
- mp: Es como un podcast, solo el audio.
- [grep](https://es.wikipedia.org/wiki/Grep): Permite buscar un texto.
- videogrep: Permite buscar videos.
- supercut: Tipo de edición de video que consiste en un montaje de clips cortos con el mismo tema.
- La terminal corre lo que tu quieras que corre -Aarón 
- spaCy: Es una biblioteca de python y de código abierto para el procesamiento del lenguaje natural (PLN).

---

Tesis de [Mateo](https://github.com/matbutom/)

- Tipografía en la propaganda política chilena (me sirve para serigrafía jiji).
  - Serif, display y rotulos, sans serif.
- Compilar: pasar de lenguaje legible de humano a maquina.
- Transpilar: compilar algo que estaba en python.
- Shuffle: es un código que sirve para que las cosas no se repitan a cada rato y sea al azar.
- Es importante comentar siempre en el código antes de programarlo.

---

Tesis de [Janis](https://github.com/janisepulveda)

- Neuralgía del trigemino, como desde el diseño podemos transformar lo invisible en algo visible.
- Es un amuleto para ver el tema de las crisis, tener contactos con neurólogos, etc,
- [Flutter](https://flutter.dev/?utm_source=google&utm_medium=cpc&utm_campaign=brand_sem&utm_content=latam_latam&gclsrc=aw.ds&gad_source=1&gad_campaignid=13034410696&gbraid=0AAAAAC-INI_zdUFH-tcI12hAaTPWRbqpN&gclid=CjwKCAjwiY_GBhBEEiwAFaghvsei6-ya9YH7SR2JM56XgK4IHPnrq-MMlnvseSFaGbWq6hkgPWrkghoCk4cQAvD_BwE): Sirve para programar apps. Tiene acceso a Materials design de Google, donde se puede usar iconografías o tipografías
- Está trabajando con una placa ESP-32, que es muy mini.
- Bluetooth Low Energy: utiliza baja energía.
  - BlE: se usa para cosas muy técnicas

---

### Modos de saludar, trabajo en clases 

Específicar las ideas de cada una y obtener una versión mejorada o iterada.

Idea mejorada 1: Tenemos el arduino, LEDS, una pantalla OLED y el sensor de proximidad HC-SR04. Cuando mi mano está lejos (aprox. 1 m), una luz roja se encenderá y derivará a la pantalla en donde saldrá el mensaje "No te saludaré, estás muy lejos". Si, mi mano está cerca (aprox. 30 cm) se encenderá una luz verde y en la pantalla OLED saldrá el mensaje "HOLAA" (con una imagen de un monito).

- A . Si mi mano está lejos, no te saludaré
- B . Si mi mano está cerca, te saludaré

Idea mejorada 2: Tenemos el arduino, una pantalla OLED y el sensor de proximidad. Se basa en un juego, donde tendremos un monito que "correrá". Al colocar la mano a cierta distancia (20 cm) comenzará a saltar, con un mensaje que diga "HOLA", cuando quites la mano, este seguirá "corriendo"

- A . Quitar mano del sensor = El monito seguirá corriendo
- B . Colocar mano cerca del sensor  = El monito saltará y dirá "HOLA"

# sesion-07a ᯓ★

## Teoría ⋆ 𐙚 ̊.
+ **Cosmotécnica / Tecnodiversidad – Yuk Hui**
+ **Liquen Lab**: Bienal de artes medievales  

──── ୨୧ ────

## Encargos 🎧ྀི
+ **Para el viernes**: traer **10 proyectos de Internet de las Cosas (IoT)** que puedan servir como prueba, inspiración o herramienta de estudio y bitácora.  
+ **Grupo Proyecto 02: “Chispop”**  
  **Integrantes** (Grupo 03):  
  + Antonella Aguilar  
  + Javiera Moraga  
  + Pia Orellana  
  + Angela O’Ryan  
  + Josefa Quape  

### Proyecto: *Máquina de saludos en idiomas* ˚ ༘ 🦕𖦹⋆｡˚ 
+ **Entrada**: seleccionar un idioma en un menú + detectar un sonido.  
  + Sensores: encoder, sensor de sonido digital.  
  + [Sensor sonido – Afel](https://afel.cl/products/sensor-sonido-digital) ($1.000)  
  + [Sensor sonido – Mechatronic Store](https://www.mechatronicstore.cl/sensor-de-sonido-digital-ajustable-hc-20/) ($1.990)  
  + [Sensor sonido – MercadoLibre](https://articulo.mercadolibre.cl/MLC-437895383-sensor-sonido-microfono-analogo-digital-ky-037-mic-max--_JM) ($2.490)  
  + [Encoder – Afel](https://afel.cl/products/encoder-rotatorio-ky-040-360-grados) ($2.000)  
  + [Encoder – MCI Electronics](https://mcielectronics.cl/shop/product/modulo-encoder-rotatorio-con-pulsador) ($2.290)  
  + Duda: **no sabemos cómo se conectan**.  

+ **Salida**: menú en pantalla OLED que permita elegir un idioma y que el sistema salude con sonido y mensaje en pantalla.  
  + Sensores: pantalla OLED + módulo reproductor MP3.  
  + [Pantalla OLED – Afel](https://afel.cl/products/pantalla-lcd-oled-1-3-128x64-caracteres-azules) ($6.500)  
  + [Pantalla OLED – MCI Electronics](https://mcielectronics.cl/shop/product/display-oled-de-128-x-64-pixeles-controlable-por-i2c-29546/) ($5.490)  
  + [Módulo MP3 – Altronics](https://altronics.cl/reproductor-mp3-dfplayer-mini) ($4.076)  
  + [Módulo MP3 – Mechatronics Store](https://www.mechatronicstore.cl/reproductor-mp3-wav-yx5300-micro-sd) ($3.990)  
  + Duda: **se parece a lo que hace otro grupo (FUE RESUELTO) / ¿se pueden usar caracteres de otros idiomas en la OLED?**  

──── ୨୧ ────

## Componentes y conceptos vistos ૮₍ ´ ꒳ `₎ა
+ **NFC** (Near-Field Communication): comunicación inalámbrica de campo cercano. [Wikipedia](https://es.wikipedia.org/wiki/Comunicación_de_campo_cercano)  
+ **RTC (Real Time Clock)**: módulo que guarda la hora exacta incluso cuando no está conectado.  
+ **Módulo reproductor MP3**: reproduce sonidos desde tarjeta SD.  
+ **Motores**:  
  + **DC**: rápido, sin control de posición.  
  + **Mini motor paso a paso**: movimientos precisos por “pasos”.  
  + **Micro servomotor**: preciso pero frágil.  
  + **Motor síncrono**: mantiene velocidad fija (ejemplo: escaleras mecánicas).  
+ **Tiras LED**: consultar con profe Sergio Majluf o ver [Demasled](https://demasled.cl/).  

──── ୨୧ ────

## Referentes ₊˚⊹ᰔ

### Lenguaje

+ [MarcoMeatball](https://www.youtube.com/@MarcoMeatball): expresividad vocal, doblaje, ópera.  
+ [The Infographics Show](https://www.youtube.com/@TheInfographicsShow): explicación clara y simple de temas complejos.  

### Código ୭˚. ᵎᵎ 
+ [LcdMenu (GitHub)](https://github.com/forntoh/LcdMenu): biblioteca para menús en Arduino.  
+ [Clapper LED Candle (Instructables)](https://www.instructables.com/Clapper-LED-Candle): vela LED controlada por aplausos.  

### Documentación ⋆.𐙚 ̊
+ [Digital Keyboard (ProjectHub)](https://projecthub.arduino.cc/rexhepmustafovski/build-a-simple-digital-keyboard-that-plays-real-notes-using-arduino-373f0e): documentación clara con lista de componentes, diagramas y aprendizajes.  

### Materialidad ༘⋆
+ [Add Voice to Arduino Projects (Instructables)](https://www.instructables.com/Add-Voice-to-Your-Arduino-Projects-Without-Using-A): cómo usar parlantes comunes en lugar de módulos MP3.  

✦•┈๑⋅⋯ ⋯⋅๑┈•✦

## 🗒️ Notas extra
+ Proyecto mostrado: **“Las llamadas que nunca hice”**  
  + [Info GAM](https://gam.cl/actividades/las-llamadas-que-nunca-hice-voyager/)  
  + [Instagram proyecto](https://www.instagram.com/lasllamadasquenuncahice/)  
  + [Instagram autor](https://www.instagram.com/juanjoacuna/)
 
  ✦•┈๑⋅⋯ ⋯⋅๑┈•✦

## ✦ Encargo 7a-1
**Tarea:** Leer las bitácoras de colegas, encontrar **similitudes, diferencias, preguntas y aciertos** de sus máquinas saludadoras propuestas.  
Además, citar correctamente las fuentes.  

+ ( ꩜ ᯅ ꩜;)⁭ ⁭Pendiente de revisar las bitácoras de otros grupos y redactar un análisis comparativo.  

˙ . ꒷ 🪼 . 𖦹˙—

## ✦ Encargo 7a-2
**Tarea:** Buscar **2 referentes por cada categoría** y escribir un párrafo explicando por qué lo elegí, qué aporta, inspira o si es un anti-ejemplo.  

### Lenguaje natural ₊˚⊹ᰔ
- **MarcoMeatball** ([YouTube](https://www.youtube.com/@MarcoMeatball)): cantante de ópera y actor de doblaje. Su expresividad vocal inspira a pensar en cómo grabar los saludos con naturalidad y emoción, evitando que el proyecto quede plano.  
- **The Infographics Show** ([YouTube](https://www.youtube.com/@TheInfographicsShow)): canal que explica temas complejos con un lenguaje claro. Es un referente en cómo comunicar información técnica de forma comprensible para todo público.  

### Código₊˚⊹ᰔ
- **LcdMenu (GitHub)** ([repositorio](https://github.com/forntoh/LcdMenu)): biblioteca que permite crear menús en Arduino. Relevante porque nuestro proyecto requiere un sistema de navegación con encoder y pantallita OLED.  
- **Clapper LED Candle (Instructables)** ([proyecto](https://www.instructables.com/Clapper-LED-Candle)): LED controlado con aplausos. Aunque no entendí todo el proceso, es útil como referencia de cómo un sensor sonoro puede activar funciones.  

### Materialidad ₊˚⊹ᰔ
- **Add Voice to Your Arduino Projects** ([Instructables](https://www.instructables.com/Add-Voice-to-Your-Arduino-Projects-Without-Using-A)): enseña a usar parlantes comunes en vez de módulos MP3. Aporta como alternativa económica si no contamos con todos los componentes.  
- **Demasled** ([sitio web](https://demasled.cl/)): proveedor de tiras LED. Aunque no es parte directa de nuestro proyecto, es útil como anti-ejemplo: nos recuerda que no debemos agregar elementos solo “porque se ven bonitos”, sino porque cumplen una función clara.  

### Documentación ₊˚⊹ᰔ
- **Digital Keyboard con Arduino** ([ProjectHub](https://projecthub.arduino.cc/rexhepmustafovski/build-a-simple-digital-keyboard-that-plays-real-notes-using-arduino-373f0e)): explica paso a paso, incluye componentes, diagramas y aprendizajes. Inspira a documentar nuestro proyecto de manera clara para otros estudiantes.  
- **Las llamadas que nunca hice** ([GAM](https://gam.cl/actividades/las-llamadas-que-nunca-hice-voyager/)): proyecto artístico con uso creativo de sensores. Me inspira en la documentación narrativa y cómo se puede contar la historia detrás de un objeto interactivo.  


# sesion-07a

-23-09-2025

## Apuntes de la clase

- **NFC (Near-Field Communication):**  
  Uso con Arduino para comunicación de corto alcance.  
  Referencia: [Beginning NFC (Google Books)](https://books.google.cl/books?id=ScuYAgAAQBAJ&printsec=copyright&redir_esc=y#v=onepage&q&f=false)

- **NIC Chile:**  
  Plataforma para consultar quién es dueño de los dominios .cl.  
  [https://www.nic.cl](https://www.nic.cl)

- **Hackaday:**  
  Sitio para revisar proyectos de electrónica y makers.  
  [https://hackaday.com/](https://hackaday.com/)

- **CW&T (referente de diseño):**  
  Página de estudio de diseño y sensores.  
  [https://cwandt.com/](https://cwandt.com/)

---

## Sensores y Módulos

- **RTC (Real Time Clock):**  
  Sensor para ver y registrar la hora en tiempo real.

- **Módulo de grabación y reproducción:**  
  Permite almacenar y reproducir sonidos.

---

## Displays y Luces

- **Nixie Tubes:**  
  Tubos de visualización vintage para números.

- **Demasled:**  
  Marca/proveedor de cintas LED.

- **Matriz LED (NeoPixels):**  
  Pantallas de LEDs programables para animaciones.

- **Rotation LED Display:**  
  Mediante un motor rotativo se generan imágenes o texto con luces (efecto visual POV).

---

### Motores y Actuadores

### Motor DC
- *"Es rápido y no sabe dónde está"* – (Misa).  
- Permite cambiar la dirección de giro.  
- No tiene control preciso de posición.

---

### Motor Paso a Paso
- *"Lento, preciso y no sabe dónde está"*.  
- Se mueve por **grados** (control de pasos).  
- Requiere un **driver** porque Arduino no entrega suficiente energía.  
- El **torque** define cuánto puede levantar por cm.

---

### Servo Motores
- **Sabe dónde está** y es relativamente preciso.  
- Posee librerías de Arduino para facilitar el control.  
- Mejor rendimiento con **engranajes metálicos**.  
- Existen servos que giran **360°**, pero en ese caso **no saben dónde están** (pierden referencia de posición).

---

### Solenoide
- Produce un movimiento **lineal** (empujar/halar).

---

### Proyecto: Máquina que Saluda

### Descripción
La **Máquina Saludadora** es un dispensador de chicles que reconoce el color del dulce y responde con un mensaje personalizado.  

- El sistema contiene una **carcasa en forma de alien**, con un ojo animado en una pantalla circular.  
- El ojo puede **abrirse, cerrarse, parpadear y moverse** según la interacción.  
- Al dispensar un chicle, el sensor de color identifica el tono y se activa un parlante que dice:  
  **"Hola Terrícola" + frase asociada al color**.  

---

### Ideas Principales
- Máquina dispensadora de dulces/gomas de colores.  
- Cada color tiene un **mensaje distinto** reproducido por un módulo de audio.  
- El diseño exterior es un **personaje (alien)** que refuerza la interacción.  
- El ojo animado en la pantalla TFT muestra expresiones (abierto, cerrado, parpadeo, etc.).  

---

### Materiales

- **Sensor de color TCS230/TCS3200** – $5.000  
  [Ver producto](https://afel.cl/products/sensor-reconocimiento-de-color-tcs230-tcs3200)

- **Pantalla TFT Circular 1.24" RGB 240x240** – $12.000  
  [Ver producto](https://afel.cl/products/pantalla-tft-circular-1-24-pulgadas-rgb-240x240)

- **Protoboard**  
- **Cables de conexión**  
- **Arduino**  

- **Módulo Grabación/Reproducción de Audio ISD1820 (20s, un solo sonido)** – $3.000  
  [Ver producto](https://afel.cl/products/modulo-grabacion-reproduccion-de-audio-isd1820-con-microfono-integrado)

- **Módulo Reproductor MP3 DFPlayer Mini** – $2.990  
  ➜ Para reproducir múltiples sonidos.  
  [Ver producto](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini)

- **Mini Parlante Altavoz 3W** – $3.000  
  [Ver producto](https://afel.cl/products/mini-parlante-altavoz-de-3w)

- **Chicles de bolita de colores**

---

### Funcionamiento (Resumen)

1. El usuario interactúa con la máquina y recibe un **chicle**.  
2. El **sensor de color** detecta el tono del chicle.  
3. Según el color, se elige un **mensaje predefinido**.  
4. El **módulo de audio** reproduce:  
   - `"Hola Terrícola"` + mensaje asociado.  
5. El **ojo en la pantalla TFT** reacciona con animaciones (parpadeo, mirada, expresión).  

---

#### Encargo 12

#### Lectura Comparativa de Bitácoras sobre Máquinas Saludadoras

Tras revisar las propuestas de colegas, es posible reconocer una serie de patrones comunes, así como particularidades que diferencian a cada proyecto.  

#### Similitudes
- Los **sensores** son protagonistas: ya sea de movimiento, proximidad, botones o joysticks, siempre median la detección del usuario.   
- La **retroalimentación inmediata** es clave: luces, sonidos, pantallas o movimientos acompañan el gesto de saludar.  
- Todas las bitácoras resaltan la idea de que el saludo debe ser una **experiencia memorable**, no solo una acción mecánica.
- - La mayoría de las máquinas plantean un **modo en reposo** que se activa cuando el usuario se acerca o interactúa. 

---

#### Diferencias
- **Nivel de complejidad:** hay desde máquinas muy sencillas que emiten un saludo básico, hasta proyectos con diálogos e interacciones más largas.  
- **Construcción narrativa:** en ciertos casos la máquina tiene **identidad y personalidad propias**, mientras que en otros es un dispositivo funcional y minimalista.  
- **Escala física:** algunos diseños son **compactos y portátiles**, otros buscan ser **instalaciones más grandes** en un espacio.  

---

#### Preguntas que surgen
- ¿Cómo asegurar la **precisión de los sensores** para evitar falsas detecciones?   
- ¿Qué estrategias permiten **mantener el interés del usuario** más allá del saludo inicial?  
- ¿Cómo responde la máquina si **varias personas interactúan al mismo tiempo**?  
 
---

#### Aciertos Identificados  
- Algunas propuestas incluyen **instrucciones** para orientar al usuario en la interacción.  
- Algunos diseños consideran la **escalabilidad**, pensando en cómo la máquina podría adaptarse a distintos contextos o usos.  

---

##### Encargo 13

##### Referentes asociados a el Proyecto

##### 1. Lenguaje Natural (Personas)

---

##### 2. Código

---

##### 3. Materialidad

---

##### 4. Documentación

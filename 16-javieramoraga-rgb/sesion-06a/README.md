# sesion-06a 𐔌՞. .՞𐦯

## Apuntes Clase 6A ⋆˚꩜｡

### Conceptos Importantes  ⋆˙⟡

Objetos y Clases
  
+ Se pueden usar de forma intercambiable.

+ Programación orientada a objetos → programar objetos que convergen a través de clases.

+ "Programar con cajitas".  

Lint (Linter)

+ Analizador de código estático.
  
+ Detecta errores, problemas de estilo y construcciones sospechosas antes de ejecutar el código.
  
+ Mejora la calidad, seguridad y rendimiento del proyecto.
  
+ En GitHub se configura en `.github/markdown-lint.yml`.  

YAML

+ Lenguaje de serialización de datos.

+ Se usa para configurar procesos automatizados (por ejemplo, GitHub Actions).  

Automatización

+ "El poder de la programación está en repetir y automatizar."

+ **Action → Workflow:** flujo de trabajo para automatizar procesos dentro del repositorio.

**Overleaf y LaTeX**  

+ **Overleaf**: plataforma online para escribir documentos en LaTeX.

+ **LaTeX**: sistema de composición tipográfica, ideal para tesis y documentos técnicos.

  + Separa contenido de formato.

  + Compila comandos para generar PDF de alta calidad.  

+ **Dato curioso:** El primer computador fue una máquina de tejido.  

────୨ৎ────

### Plataformas y Recursos  ᯓ★

+ [Scratch](https://scratch.mit.edu/) – Programación visual.
  
+ [Pure Data](https://puredata.info/) – Programación con nodos/cajas.

+ **TouchDesigner** – Programación con cajitas.
  
+ **VVVV** – Software de programación gráfica.
  
+ [Golan Levin - Frank Ratchye Studio](https://github.com/creativeinquiry) – Recursos creativos e interactivos.
  
+ [Overleaf](https://es.overleaf.com/) – Para escribir documentos en LaTeX.  

────୨ৎ────

### Sensores Vistos en Clase  ⋆｡‧˚ʚ🍓ɞ˚‧｡⋆

+ **Ultrasónico:** mide distancia emitiendo sonido y midiendo el rebote (poca precisión).
  
+ **Temperatura y Humedad:** mide condiciones ambientales.
  
+ **Gas:** detecta gases en el ambiente.
  
+ **Encoder Rotatorio (KY-040):**
  
  + Gira sin límite, se puede presionar (como perilla de lavadora).

  + **Precio:** $2000 c/u aprox.

+ **Sensor de Humedad de Suelo:**
  
  + Detecta humedad en plantas (ideal para riego automático).

  + **Precio:** $2300 c/u aprox.

  + **Idea:**

    + Mascota interactiva con una planta real.

    + Si la planta tiene sed → llora.

    + Si está bien → sonríe.

    + Puede usar luces, sonidos o pantalla para mostrar su "estado".

    + Útil para personas que están aprendiendo a cuidar plantas.

+ **Sensor de Lluvia:**
  
  + Detecta gotas de agua o cualquier contacto conductor (sensor pasivo).

+ **Joystick:**
  
  + Incluye potenciómetros y un botón.

  + Similar al de los mandos de videojuegos.

+ **Sensor de Sonido:**
  
  + Detecta intensidad de sonido o eventos (aplausos, portazos).

─── ⋆⋅☆⋅⋆ ──

## Links referentes investigados/ de ayuda ⋆✴︎˚｡⋆  

+ [Proyecto con sensor de humedad (Arduino Project Hub)](https://projecthub.arduino.cc/Aswinth/soil-moisture-sensor-with-arduino-91c818)
  
+ [Guía Sensor de Humedad de Suelo - Acortes.co](https://acortes.co/proyecto-27-sensor-de-humedad-de-suelo/)
  
+ [Sensor de Humedad de Suelo - Luis Llamas](https://www.luisllamas.es/arduino-humedad-suelo-fc-28/)
  
+ [Proyecto de Riego Automático](https://cdtechnologia.net/tecnologia-educativa/1884-5603-proyecto-riego-automatico-con-sensor-de-humedad-de-suelo.html)
  
+ [App de Sensores para Teléfono (Android)](https://play.google.com/store/apps/details?id=com.kelvin.sensorapp)
  
+ [AFEL - Tienda de Componentes](https://afel.cl)  

─── ⋆⋅☆⋅⋆ ──

### Sensores Investigados y Cotización ᯓ★

+ **Sensor Ultrasónico HC-SR04** → $2.500 (Afel)

+ **Sensor de Humedad de Suelo** → $2.300 (Afel)

+ **Encoder Rotatorio KY-040** → $2.000 (Afel)

+ **Sensor de Sonido KY-037** → $3.000 (Afel)

### Referentes de uso ⋆˚꩜｡

+ **Ultrasónico:** utilizado en robots para evitar obstáculos ([ejemplo Arduino](https://projecthub.arduino.cc/Aswinth/soil-moisture-sensor-with-arduino-91c818))

+ **Humedad de Suelo:** riego automático para plantas ([proyecto ejemplo](https://acortes.co/proyecto-27-sensor-de-humedad-de-suelo/))

+ **Encoder Rotatorio:** usado en interfaces para elegir opciones de menú (como perillas de lavadora).

+ **Sensor de Sonido:** sistemas de control por aplauso o detección de ruidos para automatizar luces.
  
### 3 Ideas para Proyecto-02 (Máquinas de Saludar) ૮₍˶ᵔ ᵕ ᵔ˶ ₎ა

1. **Planta Interactiva:** si el sensor de humedad detecta que está seca, enciende una luz roja y “pide agua” con un sonido.  
2. **Saludo por Aplausos:** usar el sensor de sonido para que un brazo mecánico salude cada vez que detecte 2 aplausos seguidos.  
3. **Radar de Bienvenida:** con el ultrasónico, detectar cuando alguien se acerca y que la máquina reproduzca un sonido o mueva una bandera de saludo.

***

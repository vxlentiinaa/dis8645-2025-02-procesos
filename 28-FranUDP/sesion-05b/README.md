# sesion-05b

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### [.h (header file) and .cpp (C++ file)](https://docs.arduino.cc/learn/contributions/arduino-creating-library-guide/)

El archivo de ${\color{#b0e6e6}encabezado\ (header)}$ contiene las distintas ${\color{#b0e6e6}definiciones}$ que utiliza nuestra biblioteca (library); es decir, en este archivo se encuentran definidas todas las ${\color{orange}funciones}$, ${\color{cyan}variables}$ y ${\color{#b0e6e6}clases}$ que vayamos a utilizar, mientras que el archivo ${\color{#b0e6e6}fuente\ (source,\ C++)}$ contiene el código que dicta ${\color{#b0e6e6}cómo\ funciona}$ cada ${\color{orange}función}$, cómo se utilizan las ${\color{cyan}variables}$, etc.

### [Inheritance](https://whileinthisloop.blogspot.com/2016/05/c-in-arduino-inheritance.html)

Consiste en crear una ${\color{#b0e6e6}nueva\ clase\ (child)}$ a partir de una ${\color{#b0e6e6}clase\ base}$ ya existente ${\color{#b0e6e6}(parent)}$. La ${\color{#b0e6e6}clase\ child}$ tiene ${\color{#b0e6e6}acceso\ a\ todas}$ las ${\color{orange}funciones}$, ${\color{cyan}variables}$ y demás que ${\color{#b0e6e6}conforman}$ a la ${\color{#b0e6e6}clase\ parent}$, lo que nos permite crear una nueva clase que ${\color{#b0e6e6}extiende\ las\ capacidades}$ de la clase original.

#### Ejemplo:
![Ejercicio hecho en clases, sobre clases](./imagenes/clases.jpg "Fuente: FranUDP")

*   La clase `CNC` consiste en máquinas y/o herramientas ${\color{#b0e6e6}controladas\ por\ un\ computador}$.

*   La clase `3D_printers` añade la capacidad de ${\color{#b0e6e6}fabricación}$ mediante ${\color{#b0e6e6}adición\ de\ material}$.

*   La clase `FDM` (Fused Deposition Modeling) construye un objeto ${\color{#b0e6e6}capa\ por\ capa}$ depositando ${\color{#b0e6e6}material\ derretido}$; la clase `SLA` (Stereolithography) genera un volumen ${\color{#b0e6e6}solidificando\ resina}$ líquida con ${\color{#b0e6e6}luz\ UV}$; la clase `SLS` (Selective Laser Sintering) usa un ${\color{#b0e6e6}láser}$ para ${\color{#b0e6e6}derretir}$ y ${\color{#b0e6e6}soldar}$ partículas de ${\color{#b0e6e6}polvo\ metálico}$.

*   A partir de la clase `FDM`, la clase `Bed_Slinger` ${\color{#b0e6e6}mueve}$ la ${\color{#b0e6e6}superficie\ de\ construcción\ (cama)}$ en el ${\color{#b0e6e6}eje\ Y}$; la clase `Cama_Fija` no mueve la superficie de impresión en el eje Y, sino que ${\color{#b0e6e6}mueve\ la\ cabeza}$ ${\color{#b0e6e6}(toolhead) en\ X\ e\ Y}$; la clase `Delta` tiene la cama fija (${\color{#b0e6e6}redonda}$), ${\color{#b0e6e6}mueve\ la\ cabeza\ en\ X,\ Y\ y\ Z}$, y los ${\color{#b0e6e6}3\ steppers\ trabajan\ en\ conjunto}$ para realizar cada movimiento.

*   Dentro de la clase `Bed_Slinger`, la clase `Cartesian` tiene ${\color{#b0e6e6}un\ stepper\ para\ cada\ eje}$ de movimiento y una ${\color{#b0e6e6}estructura\ rígida}$, mientras que la clase `Cantilever` tiene el ${\color{#b0e6e6}eje\ X\ sujetado\ en\ un\ extremo}$.

*   De la clase `Cama_Fija`, la clase `CoreXY` emplea ${\color{#b0e6e6}2\ steppers\ que\ trabajan\ en\ conjunto}$ para mover la cabeza en X e Y; la clase `Cross_Gantry` tiene los ${\color{#b0e6e6}motores}$ que mueven la cabeza en ${\color{#b0e6e6}X\ o\ Y}$ ${\color{#b0e6e6}independientes}$ uno(s) del otro(s).

*   Etc.

-----------------------------------------------------------------------------------------------------------
## Encargo 09 <!-- escuchar y comentar uno de los tres primeros discos de la banda Primus -->
### Primus

Escuché el álbum "Sailing the Seas of Cheese", y casi inmediatamente me percaté de que sonaba distinto a toda la música que he escuchado. No me agradaba, pero no entendía por qué.

Tras volver a poner el álbum desde el inicio, ahora escuchando con más atención, me di cuenta de que no hay una armonía entre las líricas y el acompañamiento musical: en lugar de trabajar en conjunto complementándose, había una disonancia entre las dos. La música era más como un ruido de fondo en bucle, con cuyo ritmo el vocalista no coincidía, haciendo que tuviese que apurarse al final de sus estrofas.

También noté que el vocalista canta desafinado a propósito, exagerando su voz y reestructurándola constantemente.

Si tuviese que describir la sensación que me transmite su música, tomando en consideración todo lo que ya he descrito, diría que tienen una *Wacky eerie vibe*.

-----------------------------------------------------------------------------------------------------------
## Encargo 10 <!-- investigar sobre la obra de Mitchel Resnick, leer uno de sus escritos o ver una de sus charlas, y comentarla críticamente -->
### [Mitchel Resnick](https://youtu.be/RYAz7r3kk2s?si=J77xmGQyCUx2Ok2t)

Tras ver la charla de Mitchel Resnick en el *HundrED 2020 Innovation Summit*, me agradó mucho su enfoque de rediseñar la educación para que las futuras generaciones aprendan a pensar creativamente, razonar sistemáticamente y colaborar de forma efectiva. Resnick menciona que estas no son solo habilidades para el mundo laboral, sino competencias esenciales para mantener una sociedad democrática funcional. La capacidad de empatizar y comprender puntos de vista distintos, por más erróneos que estos nos parezcan, es la base para construir acuerdos y un futuro mejor.

Sin embargo, no soy capaz de comprender cómo, teniendo modelos probados de aprendizaje creativo, como las *Clubhouses* de Resnick, seguimos con un sistema educativo que no solo ignora estas lecciones, sino que activamente avanza en la dirección contraria.

Me di cuenta de esto durante una reunión familiar reciente, en la que [Víctor Pérez](https://es.wikipedia.org/wiki/V%C3%ADctor_P%C3%A9rez_Vera), ex rector de la Universidad de Chile, nos comentó con preocupación cómo había recibido una carta de estudiantes de séptimo básico de Talca, cuya redacción y caligrafía estaban muy por debajo de lo esperado para su nivel. Este es un síntoma de un problema más profundo: según Pérez, el ministerio ha adelantado conceptos complejos a edades más tempranas, enseñando materias que antes se pasaban en cuarto a primero básico, generando frustración y desinterés. Al mismo tiempo, se implementan protocolos sobre violencia y acoso escolar que, en lugar de enseñar habilidades colaborativas y de resolución de conflictos, "investigan" y "resuelven" a puertas cerradas entre instituciones y apoderados, haciendo que en ningún momento el estudiante enfrente a su agresor o que siquiera se pidan perdón.

Esto es el resultado de un sistema que prioriza la memorización sobre la comprensión y la burocracia por sobre el desarrollo humano. Estamos formando nuevas generaciones que asocian el estudio con la frustración, que se sienten incapaces y que no desarrollan las herramientas para dialogar y solucionar sus propios conflictos. Dejamos de lado un modelo que fomenta la creatividad y la colaboración, para perpetuar uno que, en el peor de los casos, alimenta la apatía y la idea de que el camino del esfuerzo no vale la pena.
# sesion-06b
## 12.09.25

### Pyton
+ Según godaddy.com: Python es un lenguaje de programación de alto nivel, interpretado y de código abierto, creado por Guido van Rossum en 1991. Fue diseñado centrándose en la simplicidad y la legibilidad del código, hecho que permite a los desarrolladores expresar conceptos en menos líneas de código en comparación con otros lenguajes como C++ o Java. Descifrando el lenguaje de programación, resulta mucho más sencillo tanto de aprender como de utilizar.
+ Características:
+ El lenguaje Python favorece una **sintaxis que es fácil de leer y entender**, lo que facilita el mantenimiento y la colaboración en proyectos de software.
+ No es necesario declarar el tipo de variable, lo que hace que el código sea más corto y flexible que en la gran mayoría de alternativas de lenguajes de programación disponibles.
+ Python maneja la memoria automáticamente, lo que reduce la posibilidad de sufrir errores habituales como las fugas de memoria.
+ Este lenguaje se ejecuta línea por línea, lo que facilita la depuración de errores y la experimentación con nuevas ideas.
+ Es posible integrar otros lenguajes de programación con Python, lo que permite optimizar partes críticas del código.
+ Python integra una gran biblioteca estándar que ofrece módulos y funciones para tareas comunes, lo que reduce la necesidad de escribir código desde cero.
+ El código de Python puede ejecutarse en múltiples plataformas sin necesidad de modificaciones, lo que garantiza una gran compatibilidad y facilita la distribución de software.

+ **Transpilar**: Según gemini es el proceso de **convertir el código fuente de un lenguaje de programación a otro código fuente**, generalmente del mismo nivel de abstracción, para adaptar el código a entornos, versiones o propósitos específicos. A diferencia de un **compilador tradicional que traduce a lenguaje máquina,** un transpilar traduce entre lenguajes de alto nivel, como transpilar TypeScript a JavaScript o código PHP moderno a una versión anterior.

+ Intencionar comportamientos.

+ **Dart** Según Gemini: Dart es un lenguaje de programación de propósito general, orientado a objetos y de código abierto desarrollado por Google en 2011, diseñado para ser productivo en el desarrollo multiplataforma de aplicaciones móviles, web y de servidor
+ **Flutter**: Según Gemini: kit de desarrollo de software (SDK) de código abierto de Google para crear aplicaciones para móvil (iOS y Android), web, desktop y sistemas integrados desde una única base de código.

### Encargo en clase

**3- El Arduino indeciso:** Sensor acelerometro + pantalita.
  + Si la máquina está quieta: en la pantalla aparece un mensaje de “Pregúntame algo…”.
  + Cuando la agitas: genera una respuesta y la muestra en la pantallita.
    
  + Ejemplos de reespuestas según eje:
  + Eje **X** Respuestas radicales (si o no)
    + “Sí, dale nomás.”
    + “Eri wn o te haci?.”
    + "dale weon/a"
    + "No, tu sabi porqué"
    + "Ni cagando"
      
  + Eje **Y** Respuestas inciertas (te guían a tomar la decisión)
    + “Si dudas, aún no es el momento”
    + "Si dejas de forzarlo funcionará”
    + "Demasiado pronto para saberlo"
    + “Hoy no, pero mañana quién sabe”
    + “Si hoy ves tres autos rojos, adelante”

   #### Pasos
  
  + **Paso uno:** Pantallita te invita diciendo "Dispara tu duda con confianza" Agitar el sensor en dirección eje "y" o eje "x".
  + **Paso dos**: La Pantallita muestra "pensando" y luego de 2seg te da una respuesta random dependiendo eje, luego espera 5 segundos y se va al paso 3.
  + **Paso tres**: Pantallita espera invitándote otra vez diciendo "Dispara tu duda con confianza".

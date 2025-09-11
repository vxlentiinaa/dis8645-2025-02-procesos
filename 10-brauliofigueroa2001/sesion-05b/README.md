# sesion-05b

## taller clase 5b, viernes 9 de septiembre

llegué tarde pero vivo y feliz, importante

- la importancia del proceso por sobre la nota
- no somos de segunda categoría

### parte 1 arduino grabación

- tiende a pasar que el archivo h es cortito, archivo cpp grandes
- en el h prometo, en el cpp me hago cargo
- **no hay nada de lo que hagamos que sea de segunda categoría, la dignidad de lo que uno hace, no existe la versión fruna**, esto que dijo Aarón lo encontré muy bello
- Adafruit_GFX, eran gráficas
- GFX es una biblioteca grande para hacer gráficas que creó Adafruit
- class adafruit_SSD1306 : public Adafruit_GFX, significa que adafruit ssd1306 es también un Adafruit_GFX
- class completo_italiano : public Completo {}, significa que el completo italiano es un TIPO de completo
- w3schools,  hay tutoriales de todo tipo para código
- atributos son variables y métodos son funciones, dentro de una clase
- las clases se usan cuando queremos crear estructuras de datos que no nos caben en los bloques fundamentales que viven en un lenguaje de programación
- los diseñadores no sólo saben hacer publicaciones en Instagram, no puedo estar más de acuerdo
- ¿cómo podríamos haber utilizado una class en el proyecto 1?
- si hay archivos .h hay archivos .cpp
- las clases están hechas no solamente para que estén en el mismo nivel sino que tengan también distintas jerarquías
- tengo textos, dentro de textos tengo poemas y dentro de poemas tengo poemas de parra
- si en texto crudo tomo decisiones, estas cosas se propagan en todo lo demás, se expanden, se repeta la jerarquía
- todos los poemas tendrán las mismas características internas, por ejemplo le determino cierta tipografía, cierto tipo de tinta
- los poemas comparten estas características que yo designo dentro de texto.h
- puedo cambiar independientemente en cada categoría los "aspectos"
- por ejemplo en poema.h puedo designar una tipografía, pero esto pasaría a llevar a poemaparra porque también está dentro de poema, para cambiar esto y que no afecte a poemaparra debo ir directamente a poemaparra a cambiar esta variable
- en texto designo float, esto dice que tendrá nota, poema heredó que tenga nota pero tiene una distinta
- esto lo hago gracias a public class, aún no entiendo bien cómo funciona esto

  después del break hay gente que se va al lab a hacer class, definir class , no importa los puntos y coma, es más un proceso de planificación

VUELTA BREAK

### clases

- ahora debemos hacer clases, generarlas
- yo lo entiendo como una categoría principal, que tiene una subcategoría y dentro de esta subcategoría existe una cosa que también pertenece a las 2 categorías anteriores
- como las mamushka
- en este bloque Aarón dispuso información sobre las clases en la pizarra, creo que esto me ayudó a entenderlo mejor en vez de verlo directamente en computador
- no cree código en este segmento porque la idea era entenderlo más desde afuera, con códigos que quizá no funcionan pero había que entender el macro
- algunas de las que hice en clases fueron: videojuego (es la clase base) --> tipo de videojuego (puede ser de rol, rpg, moba, shooter,) --> videojuego específico (counterstrike1.6)
- otro ejemplo de los que desarrollé: tipos de sándwiches (clase base) --> churrasco (es un tipo de sándwich) --> chacarero ( es un tipo de churrasco y también un tipo de sándwich)
- dentro de este ejemplo surgió mi duda: ¿qué pasa si le quito el poroto verde al chacarero? ¿sigue siendo un chacarero o pasa a ser otro tipo de sándwich, o es un chacarero sin poroto verde?, no supe responder a estas preguntas que tuve
- otro ejemplo: gato (clase base, animal) --> razas de gato (puede ser siamés, ragdoll, calico, carey, naranjo) --> gato peluo (es una raza de gato, angora)
- un array es una lista de cosas, ejemplo: en el poem sampler del proyecto 1 teníamos un array que era la lista de poemas que dispusimos
- [] lo que hay dentro de esos corchetes es un array
- Aarón dio un ejemplo con banda e integrantes de la banda, dentro del conjunto banda están los integrantes, dentro de este conjunto integrantes está integrante 1, integrante 2, integrante 3, integrante 4
- estos integrantes del 1 al 4 en vez de numerarlos uno por uno podemos meterlos dentro de un [] creando un array
- me surgió la siguiente pregunta: ¿puedo definir que un integrante de la banda se va y después vuelve? Aarón respondió mi pregunta y me dijo que sí, puedo hacer una lista de integrantes que se van, pero quiero que algunos vuelvan y otros no
- para esto debería hacer una lista que me diga de los que se fueron, quien sí puede volver y los que no pueden volver
- integrante (stringnombre) --> dentro de stringnombre va el nombre del integrante
- para agregar, crear un integrante, primero debo darle un nombre, definir quién es
- instrumento [] instrumentos, dentro de los corchetes va un conjunto de instrumentos
- ´ # include "integrante.h"
- integrante [] integrantes, el [] es un array
- agregar integrante (integrante agregade)
- quitar integrante (integrante quitade)
- el encargo es ver alguna charla de Mitch Resnick y escuchar uno de los 3 primeros álbumes de Primus

### encargo: Charla Mitch Resnick y Primus

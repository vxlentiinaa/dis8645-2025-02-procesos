# sesion-07a
## taller clase martes 23 de septiembre, 7a

llegué a las 8:50, no sé si pasaron lista lol

### primera parte

- cuando llegué estaban hablando sobre el concepto de tecnodiversidad
- esto lo estaba hablando misaaaa respecto a su viaje a méxico y su experiencia, no entendí tan bien porque llegué cuando ya había explicado un poco
- el concepto de tecnodiversidad, del chino favorito de misaaa, Yuk Hui
- liquenlab
- museo del hongo y la bienal de artes mediales
- ¿qué hice en el 18?
- me comí 5 empanadas y 5 anticuchos, 2 terremotos y asado, también me di cuenta que me gusta el 18 sólo por la comida y no por la celebración
- fuimos a una fonda y me di cuenta que realmente no me gustan las fondas, el ruido, el polvo, la gente que te empuja y se pone jugosa por estar curada, los gritos y la música fuerte
- junta muchas cosas que no me gustan en un solo lugar, por eso no me gusta. el 2023 había ido a una fonda hasta incluso bailé, pero creo que fue por la presión social de ser catalogado como "el fome" que no baila y no le gustan esos ambientes, creo que ahora lo puedo confirmar 100%, soy ese

### primera parte .1 

explicación proyecto 2

- el proyecto 2 es el 17 de octubre, es una semana antes de la semana de solemnes
- agradezco la verdad que sea antes porque así te chantas toda la semana previa preparando taller y después ya solo te preocupas de las solemnes en su respectiva semana, gracias
- ahora serán grupos de 4 a 5 personas para que se pueda dividir mejor el trabajo y todos puedan contribuir
- en la semana del 7 y 10 de octubre trabajaremos a full en el proyecto en clases, para tener más tiempo para hacerlo y que no sea algo de una clase a otra
- trabajo colaborativo
- conformar grupos en base a intereses en común, hacer match wuajajajajjajajaja

sensores y actuadores

- nfc near field communication
- nfc bip hack, nos contaron que hubo un día en que podías crear plata y meterla a la bip, fue un bug que duró más o menos unas 12 horas y después lo arreglaron
- libro: beginning nfc, de la editorial o´ reilly, esta editorial tiene muchos libros de "beginning" son antiguos dijo Aarón pero son muy buenos y completos
- ¿what is physical computing?
- nicolás briceño aravena
- [nic.cl](https://nic.cl/) puedes ver a quién pertenecen los dominios

módulos y otras cosas

- módulo rtc, sabe qué hora exacta es, significa real time clock
- los computadores saben qué hora exacta es gracias a módulos como estos
- cwandt--> gente que se forró por hacer las cosas bien y bonitas
- hackaday.io, es una tarea infinita
- si sales en esta página para tu proyecto de título es porque eres pro
- hay muchísimos ejemplos de proyectos, hay uno que era un reloj que te daba la hora mal siempre, se llama clock that is wrong
- nixie tubes, una hermosura los nixie tubes, son muy escasos y difíciles de ocupar, ocupan mucha energía

módulos y otras cosas parte 2

- módulo reproductor mp3 dfplayer
- en este módulo puedes meter una tarjeta sd con audio y puedes guardar datos
- estos datos puedes reproducirlos cuando tu quieres y específicamente el que quieres
- un módulo de grabación de reproducción
- arduino audio recorder module
- las llamadas que nunca hice, una obra de un artista que estuvo en el gam, recuperó un teléfono antiguo de esos que le metías monedas y descubrió cómo hackearlo
- de esta forma podía registrar audio y hacer que personas grabaran cosas para que otras personas las escucharan
- alguna vez vi uno de estos teléfonos, era azul con verde, creo que eran de movistar, habían en un unimarc en maipú
- patti smith, nora fernández fue citada por patti smith
- el libro "éramos unos niños" de patti smith, habla de cómo su pareja se dió cuenta que era homosexual estando con ella y el proceso que esto conllevó, terminaron siendo mejores amigos
- robert mappletorphe

actuadores

- un motor dc es rápido y no sabe donde está
- mini motor paso a paso, el arduino le dice cómo gira, va girando de a poco, paso a paso
- hay motores que pueden mover determinada cantidad de peso, algunos se tienen mucha fé
- servomotores, estos motores pueden girar en ángulos, grados
- hay un servomotor de 2 lucas en afel, este servo puede rotar en 90 grados
- 90,180,270,360, cuando el servo está en 360 no sabe donde está
- solenoide, mueven algo en línea recta
- sokio necesitaba solenoides
- motor síncrono, puede girar siempre a la misma velocidad, es constante y se adapta a los cambios ---> es esta una metáfora de Aarón?
- los motores que vibran también son de tipo dc, para hacer un motor vibrador debes poner algo pesado que desestabilice el torque, algo así entendí el semestre pasado
- dly rotating led display, era una especie de led que al girar un disco prende una luz que muestra una imagen

### parte 2 post break

- ahora nos reunimos en grupos para hablar sobre el proyecto 2 y las ideas de cada uno
- mi grupo está compuesto por: José Morales, Bernardita Lobo, Camila Parada, Francisco Stephens y yo Braulio Figueroa
- en un principio las ideas estaban muy revueltas porque cada uno tenía ideas distintas de proyecto
- por parte de Fran y Jota morales tenían pensado algo con una mano que al momento de saludarla te dijera oooso y te hiciera una burla
- Bernardita tenía una idea de un sensor que al acercarte te contaba secretos
- Camila tenía una idea de una especie de amuleto para casos de emergencia/crisis de salud mental, que funcionara con pantalla
- yo tenía una idea de un objeto que al detectarte a cierta distancia y le digas aló, te respondía y comenzaba una mini conversación contigo

#### formulación del proyecto

- nos dimos cuenta que teníamos ideas que utilizaban distintos sensores por lo cual debíamos enraizar el proyecto y tirarnos más por un lado e ir desglosando ideas, de esta forma fuimos viendo los sensores que teníamos en común los cuáles fueron: proximidad, sonido, movimiento
- comenzamos a mezclar las ideas entre sí, la primera idea que salió fue algo que debía compartir lo absurdo de la broma "oooso" y que fuera chistoso en sí, pensamos en algo que te pudiera seguir con la mirada y en algo que te hablara. Al principio habíamos pensado en un loro que te siguiera con la mirada y que al estar a cierta distancia te dijera algo aleatorio, como lo suelen hacer los loros
- en esta parte del proyecto la idea estaba más o menos clara, hacer que algo te siga y que te diga algo a cierta distancia
- en este punto se descartó la idea del loro y se fue más hacia lo absurdo, vimos un video de unos ojos que seguían y lo tomamos de inspiración
- definimos que los ojos seguirían y detectarían a un usuario y que una oreja te diría cosas, tomando de inspiración el proyecto de bernardita en el cuál algo te contaba secretos, en este caso es lo irónico de que una oreja te diga algo porque las orejas son asimiladas a la acción de escuchar
- en esta parte les docentes querían que comenzáramos a cotizar los sensores y para esto debíamos definir entradas y salidas de nuestro proyecto además del sensor que se utilizaría respectivamente en cada una de ellas por lo cuál se hizo el ejercicio en discord

- el proyecto se definiría de la siguiente manera:
- entrada:
- sensores de distancia triangulan posición de usuario.
- detecta cuando el usuario está a muy corta proximidad
- salida:
- actúa un servomotor y sigue al usuario con la mirada.
- un parlante emite sonido pre-grabado aleatorio

para esto necesitamos los siguientes sensores:

- https://afel.cl/products/sensor-de-ultrasonico-hc-sr04
- https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini?_
- https://afel.cl/products/micro-servomotor-sg90?_
- https://www.mechatronicstore.cl/altavoz-8-ohm-1w/

- en el sensor ultrasónico hc sr04 misaaa no lo recomienda mucho porque es un poco impreciso en cuanto a la detección de objetos, si algo se mueve un poco o no está en el grado/ángulo que necesitamos puede fallar
- nos recomendó otro tipo de sensor [sensor de distancia por tof](https://afel.cl/products/sensor-de-distancia-por-tof-vl53l0x)
- este sensor es más preciso para este tipo de proyectos pero misaaaa quiere que nos enfremos a las complejidades del ultrasónico hc por lo cuál de momento utilizaremos ese y aprenderemos sus mañas

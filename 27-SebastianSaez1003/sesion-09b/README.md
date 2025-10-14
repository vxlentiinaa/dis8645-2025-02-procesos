# sesion-09b

El dia de hoy me puse a revisar por qué razón no funcionaba el código que, individualmente todo funcionaba, pero ahora específicamente el servomotor no se estaba moviendo, y le costaba muuchiiiiiiiiiiiiiiiisimo en cargar información a los sensores, problema que tuve ayer trabajando en el lab.

Como ejercicio de para poder hacer múltiples pruebas de que podía ser el elemento que causaba este mal funcionamiento fui uno a uno comentando cada uno de los sensores y actuadores, hasta poder comprobar que el archivo problemático era el de el actuador del display, que ya nos había causado problemas previamente con una distorsión de las letras que se estaban siendo observadas, como también un uso de una biblioteca inusual, así que como decisión unánime, no íbamos a ocupar ese display SSH1106 que mi compañera Carla (23-Coff4) estuvo investigando durante el último tiempo. 

Como ya sabíamos que el display que ocupamos para el proyecto número uno funcionaba perfectamente nos decidimos en intentar integrar las partes de funcionamiento del display con la bibliotecas adafruit. 

Aquí fue problema mio ya que no subi el archivo de código en un tiempo razonable así que mis compañeres siguieron viendo el el código, sobretodo lo de la pantalla en una versión del código pasada, así que espere a que me llegara esa versión que era la 0_4_7 y empecé a ayudar.

Lo primero que me di cuenta es que existían muchísimos comentarios que definían razones de uso de distintas funciones y líneas de código, en vez de explicar qué es lo que hacian, asi que fue uno por uno en los archivos describiendo la función de las líneas de código.

Luego algo que encontré medio complicado para nuestro código era el hecho de almacenar los bitmaps de las caras que íbamos a querer mostrar de nuestro robot así que me hice la pregunta a mi mismo de si funcionaria el dejar estos bloques gigantes de código en el archivo de ActuadorPantalla.h, y efectivamente funcionaba, peor esto haría que se viese muy feo tambien el archivo que define los parámetros a usar en nuestra pantalla, así que simplemente cree un archivo de nombre BitmapsPantalla.h en el que colocaremos cada uno de los bitmaps a usar, este archivo sería incluido en el ActuadorPantalla.cpp, que funciono perfecto.

Ahora me dedique a escribir if statements en el archivo .ino de nuestro código para definir todas las funciones que queríamos llevar a cabo, que al menos en este punto serian 3 ya completamente definidas:

- Si es que no se detecta a nadie con el sensor Ultrasonico, no se moverán los servomotores en absoluto y la “cara” de nuestro robot estará en un estado neutro

- Si es que se detecta a una persona y la temperatura ambiente es mayor a 15 grados (dato que se puede cambiar), el robot tendrá una expresión feliz, para poder demostrar que está a gusto, mientras mueve su brazo a forma de saludo

- Si es que se detecta a una persona y la temperatura ambiente es menor a 15 grados (dato que se puede cambiar), el robot tendrá una expresión de desagrado, donde expresaba su disgusto a el frio que hace, algo que se puede observar en su cara y el hecho de que no quiere saludar con su brazo.

Las escribí y el código compilaba perfecto, solo no tengo el sensor de temperatura como para probarlo en todo su esplendor pero yo confío en que quedará maravilloso.

Como último dato del día, decidimos llamar a nuestro robot “Friolin”, un nombre chistoso en mi opinión que me gusto harto.





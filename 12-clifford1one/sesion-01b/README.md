# sesion-01b

## 08-agosto-2025 - clase 2

## conceptos arduino

- [digitalWrite()](https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite)


- [pinMode()](https://docs.arduino.cc/language-reference/en/functions/digital-io/pinMode)

- [delay()](https://docs.arduino.cc/language-reference/en/functions/time/delay) usar delay() es considerado una mala práctica, pues, el arduino se congela durante el tiempo establecido, por lo que no puede realizar otras tareas durante ese tiempo.

## Arduino IDE

códigos de color

- rojo/naranjo: identifica funciones

ejemplo: 
- void loop(){}
- digitalWrite();

### funciones

la diferencia entre ambas funciones, es que cuando tiene el void, estás definiendo que se hace dentro de esa función, cuando no tiene el void, se está "llamando" a la función, y se corre todo lo que esté adentro de dicha función.

por lo tanto, puede crear un void confeti( ){ } y definir (dentro del murciélago) qué hace ese void, y después, en el draw, llamar a confeti(), y se correra lo que diga dentro de esa función.

### tipos de dato

en arduino al declarar una variables, hay que explicitar qué tipo de dato es.

- int - númro entero
- float - número decimal
- bool - variable boolania(0 ó 1)
- char - 'caracter'(letra, número o caracter especial)
- String - "texto"

estos datos se pueden entender como "contenedores", al ir a comprar un chicle, lo guardas en un bolsillo. Pero al ir a comprar una sandía tendría que llevar un carrito de feria. Y si compras planchas de terciado, necesitas un flete. Estos distintos contenedores tienen distinto costo, y pueden cargar distintas cosas.

## personas

[Constanza Gaggero:](https://www.instagram.com/gaggeroworks/?hl=en) diseñadora gráfica profe FaAAD

[Alejandra Pizarnik:](https://es.wikipedia.org/wiki/Alejandra_Pizarnik) poeta surrealista

## links

- [arduino.cc](https://www.arduino.cc)

- [Arduino IDE:](https://www.arduino.cc/en/software) Integrated Development Enviroment

- [Arduino UNO R4 Wi Fi](https://docs.arduino.cc/hardware/uno-r4-wifi)

- [Arduino UNO R4 Minima](https://docs.arduino.cc/hardware/uno-r4-minima)

- [ejemplo comunicación acertiva:](https://www.youtube.com/watch?v=6JGp7Meg42U) Íñigo Montoya de la novela "La princesa prometida"

### extras

el caracter "enter" se representa así: /n
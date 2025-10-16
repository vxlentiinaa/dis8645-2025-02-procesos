# sesion-10a

14 Octubre 2025

## Trabajo en clases

## Cableado parlante

Estoy viendo como se hacía el cableado con el parlante y el reproductor mp3. En el reproductor MP3 no dice nada, asi que tuve que buscarlo de nuevo. Anteriormente, el grupo de tralaleros nos habia ayudado, pero se me perdió el link que usé para hacer el cableado anteriormente.

De acuerdo a este link <https://www.taloselectronics.com/blogs/tutoriales/como-usar-dfplayer-modulo-reproductor-mp3-con-arduino>

El cableado del reproductor MP3 se hace así

![mp3](https://cdn.shopify.com/s/files/1/0020/8027/6524/files/MP3-03_480x480.jpg?v=1636866608)

![cableado](https://cdn.shopify.com/s/files/1/0020/8027/6524/files/Diagrama-dfPlayer-Rafa_bb_600x600.png?v=1637000817)

VCC a 5V

RX a pin 11

TX a pin 10

SPK1 y SPK2 a parlante

## Problemas con sensores

![algunos sensores conectados](imagenes/algunos-cableados.jpg)
Como grupo estuvimos haciendo el cableado de todos los sensores que vamos a conectar. Utilizamos una gran cantidad de cables para solo algunos de los sensores que tenemos que conectar.

Cuando teníamos listo todo el cableado de los sensores, nos dimos cuenta que la pantallita ya no encendía. Por lo que Misa nos ayudó con el cableado. Efectivamente era problema de como lo habíamos conectado todo. Nos enseñó cómo conectar los cables de manera más eficiente en la protoboard que tenemos.

Ya la pantallita funcionó, se escuchaban los audios que estaban dentro de la tarjeta SD. El problema es que el encoder se podía presionar, pero no funcionaba al momento de girarlo. No se podía navegar por las opciones en el menú.

Misa nos revisó el código, y la verdad es que no entendí muy bien que hizo, pero ahora sí se puede usar el encoder. Lo que faltaría ahora es que funcione todo el resto de las cosas. Hace poco, @Joquape consiguió que apareciera el mensaje de "Aplaude para continuar" en la pantallita después de elegir un idioma. Necesito conseguir que funcione el aplauso en esta parte del código.

## Trabajo en lab

Estoy aquí en el lab probando lo que llevamos. Hasta ahora, la pantallita conecta a veces, cuando quiere. El encoder no funcionaba, pero @sebastiansaez1003 me ayudó. Probablemente fue cableado porque solo lo moví un poquito y empezó a funcionar. Y ahora el reproductor MP3 me da error constantemente. Ya moví los cables RX y TX que estaban en los lugares incorrectos, pero aún así no logro conectarlo.

![error mp3](./imagenes/error-mp3.png)

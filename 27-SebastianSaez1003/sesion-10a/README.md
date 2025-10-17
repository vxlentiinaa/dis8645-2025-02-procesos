# sesion-10a
El día de hoy, es el día de la verdad y sabiduría absoluta, donde probamos no solo toooooodos los componentes juntos, sino que también probaremos la carcasa de nuestro robot de nombre Friolin, yo almenos tenia mucha fe. 

Partimos lijando unos “tarugos” que tienen de función el unir todas las caras que tiene Friolin, nos pasamos como media hora solo intentando lijar la suficiente superficie para que entraran los tarugos, que eventualmente sí pudimos.

Luego me puse a darle una última revisada al código, donde mis compañeres me convencieron de llevar a cabo el paso a la versión del [robotFriolento_1_0_0](https://github.com/SebastianSaez1003/dis8645-2025-02-procesos/tree/main/27-SebastianSaez1003/sesion-10a/codigoRobotFriolento_1_0_0) donde le agregamos una cara “durmiendo” para su modo standby, cambie el orden de acciones en el “void loop” del archivo .ino para que no existiese un a pausa, que era considerable, cuando se detectaba a una persona y intentaba cambiar la cara que se observaba en el display, como se puede observar en el siguiente video.

[![video que saqué de mi insta](https://img.youtube.com/vi/mgef-bVR5_4/maxresdefault.jpg)](https://www.youtube.com/shorts/mgef-bVR5_4)

Y a este punto el código en la parte de la funcionalidad que teníamos pensada ya estaba “completa” o al menos todo lo que teníamos pensado funcionaba como nosotros pensábamos y esperabamos.

El siguiente paso sería dejar comentado todo de la mejor manera posible, pero a este punto Aaron revisó y corrigió nuestro código, solo fui capaz de identificar un cambio fundamental entre tooodos los archivos a primera vista asi que ocupe una herramienta para poder comprobar la diferencia entre ambos a nombre de text-compare.com/es/ 

Lo primero que pude observar es que me ayudó a definir el nombre de el display en el archivo .h en vez de como lo denia anteriormente en el .cpp del display, gracias a cambiar los datos de el ancho y alto de la pantalla como también de las imágenes que iban a ser mostradas como variable “int” en vez de declararla con #define.


Los otros cambios que puede reconocer fueron más que todo de orden, así que los aplique, asumiendo que ese tipo de orden, sobre todo en los “void” que estaba llamando a los bitmaps de las caras de Friolin.

Hablando con mis compañeres nos dimos cuenta de un detalle muy importante, que es que asumimos que una persona que nunca antes haya interactuado con Friolin, probablemente no entendería la razón de porque no saluda cuando tiene frío, así que para complementar las expresiones, también colocaremos texto en el display, esto será realizado en el archivo de la pantalla.

También empezamos a recolectar todos los ejemplos con los que nos basamos para poder realizar todas las funciones que realiza Friolin, colocándolo en los créditos respectivos.

Otra ultima cosa es que cambie los Delay a Millis, cosa que tendría que implementar en el archivo de el servomotor, como también en el de la pantalla para que no cambien de estado instantáneamente entre las caras y el texto, con dos “int” en el que uno será el tiempo actual mientras que el otro será el tiempo desde que se activó esta “pausa” que se quiere causar, o almenos asi es como lo entendí según el siguiente ejemplo:

https://www.norwegiancreations.com/2017/09/arduino-tutorial-using-millis-instead-of-delay/


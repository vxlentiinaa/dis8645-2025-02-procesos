# sesion-10a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### ${\color{cyan}Código\ V3}$

Durante la clase me enfoqué en mejorar el código, pues a pesar que funcionaba bién, se demoraba mucho en completar una pasada (escaneo y comparación), por lo que los ojos tendrían una tasa de actualización muy lenta para mi gusto.

Eliminé las variables de tiempo que controlan el movimiento del servo, a favor de que el servo se mueva (y la secuencia del código continue) el instante que se finalizan las mediciones, haciendo que cada paso del servo sea un poquito más rápido.

hesto lo hise aprovechando la función `medirDistanciaCm()`, ya que el código no avanzará a la linea siguiente hasta que esta devuelva el valor de las mediciones promediado.

y ccomencé a ver la lógica de posicionar el servo de los ojos, pues cuando se detecta a una persona, esta es detecctada en múltiples grados (pasos) del recorrido del sensor, por lo que hay que implementar una lógica que tome el angulo inicial y final de detección, determinar el centro de este cono y enviar esa ubicación al servo de los ojos.

Pero no alcancé a escribir ninguna linea de código relacionada, porque estuve ayudando a @[13-Bernardita-lobo]() con el modelado de la carcasa, aúnque no pude ser de mucha ayuda.


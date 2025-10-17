# sesion-06b

## Nomenclatura

- compilar: idioma humano a idioma computador.
- ampilar: transcribir de un idioma de programación a otro.
- Es importante intencionar fundamentos del código. Usar comentarios para escribir el esqueleto del código y lo que quiero que pase.
- **slow hot computer** (no abrir)

## Formas de saludar

1. *Hola, como estás?*/ Inicia un diálogo y muestra tu interés por el otro. Da la oportunidad de recibir una respuesta y un saludo de vuelta.
2. *Como va tu dia?*/ Muestra interés en tu bienestar a corto plazo. Da paso a anécdotas y tópicos de manera versátil para avanzar la conversación.
Otra opción es una respuesta binaria (bien/mal)
3. *Como estay?* Muy amplia pero con opción simple como la anterior. También abre el diálogo. Respuesta puede influir en sensores o puede ser transmitida a través de sensores.
4. *Que gusto verte*/ Puede ser expresado por medio de movimientos y/o luces. Puede variar si es un gusto (positivo) o si no lo es (negativo)
5. *Como has estado?*/Puede ser respondido con factores climáticos o de manera más "poética" usando la próximidad para transmitir
encierro/estrés, amplitud/tranquilidad o movimiento/actividad. Algo parecido puede hacerse con sonido o luz definiendo los parámetros correctos.
6. *Anti saludo*/ Si detecta movimiento o proximidad te espanta hasta que se detenga el estímulo.
7. *Saludo discriminador*/ Detecta proximidad en cierta altura

## Expandir y analizar. Detallar muy específicamente

### Ideas de máquinas que saludan

**Máquina saluda a gente alta**: Sensor de movimiento puesto horizontalmente en el arco de una puerta a la altura de 1,80m. Tiene un parlante integrado que reproduce un saludo cuando se altera el
valor original.

**Contador de gente**: 2 sensores de moviemiento puestos horizontalmente en una puerta almacenan las estadíscas de quienes entran y salen de la sala.
Un sensor +está puesto en el exterior de la sala y el otro en el interior. El del exterior suma al total de las personas de la sala y el del interior resta.
Para no activar ambos a la vez usaremos un if que desactive al sensor que se active último. Usando un parlante reproduciremos un saludo o una despedida
dependiendo del sensor que se active primero. Estableceremos un máximo de personas en la sala (alumnos+profes+ayudantes) y cuando los datos almacenados
lleguen a ese máximo se reproducirá una celebración porque todos están en la clase. Para evitar que se confundan los datos cuando pasa más de una persona
a la vez podríamos usar un 3er sensor que se asegure que la persona pasó al interior de la sala y sume a la cuenta.

## Lista por hacer

-Establecer audio saludo: *"Pasa, pasa"*

-Establecer audio despedida: *"A dónde vay?"*

-Instalar parlante cerca de la puerta en altura

-Instalar sensor en entrada

-Instalar sensor en salida

-Establecer cuenta máxima de 33

-Sensor salida resta a la cuenta

-Sensor entrada suma a la cuenta

-if hace que el sensor que se active primero desactive al otro

-Periódo de captar datos dura 1 segundo (o menos)

-Parlante reproduce *"Pasa, pasa"* 1 vez cuando se activa el sensor entrada

-Parlante reproduce *"A dónde vay?"* 1 vez cuando se activa el sensor salida

-Arduino almacena la cantidad de gente en la sala, sumando las entradas y restando las salidas.

-Al llegar al máximo de gnete en la sala reproduce *"música de victoria"* 1 vez

-Establecer audio *"música de victoria"*

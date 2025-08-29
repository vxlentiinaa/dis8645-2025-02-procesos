# proyecto-01

## Acerca del proyecto

- Grupo: 04 Los Vengadores mish

- Integrantes:
  - Josefa Quape
  - Milla Millar / [mmillar95](https://github.com/mmillar95)
  - José Morales / [jotamorales-romulus](https://github.com/jotamorales-romulus)
  - Francisco Stephens

## Presentación textual

Plantea aquí el problema de diseño que abordaste. Menciona el texto de referencia.

## Inputs y outputs

¿Cuál es la interacción? ¿Qué ofrece la máquina de vuelta?

## Bocetos de planificación

Fotografías y dibujos de maquetas y pruebas

- Trabajo en la aplicación Procreate para realizar los 3 dibujos que se utilizarán
- Luego, con las imágenes generadas se pasaron a image2cpp
  
![dibujo procreate a image2cpp](./imagenes/imagenCodigo.png)

- Al no tener la pantalla OLED físicamente, se trabajó con Wokwi
  
![trabajo en wokwi](./imagenes/wokwi.png)

- Se realizó un código simple con el potenciómetro para conocer cómo funciona
- Al mismo tiempo, se trabaja con la pantalla OLED
  
![potenciómetro y pantalla OLED](./imagenes/pantallaPotenciometro.png)

- Al mismo tiempo se estaba desarrollando el código traductor binario
  
![traductor binario](./imagenes/traductorBinario.png)


## Etapas del código

### Pantalla 

Establecemos la pantalla OLED de 128 x 64 que vamos a utilizar para mostrar la información en pantalla.

```cpp
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
```

Creamos “pantallita” la cual contiene los parámetros necesarios para controlar la pantalla. Es darle un apodo a nuestra pantalla. Cada vez que la controlemos, se deberá usar este apodo.

```cpp
Adafruit_SSD1306 pantallita(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
```












### potenciometro



















### Scroll 






















### Binario


















## Roles del equipo

Menciona y desarrolla los roles que ejerció cada integrante

## Fotografías y videos del proyecto funcionado

Subir fotos y videos

El video debe estar subido a youtube y mencionado en un enlace para ahorrar espacio en el repositorio

## Bibliografía

Citas en APA de repositorios y enlaces de los cuales se inspiraron. Bibliotecas, tutoriales, etc.

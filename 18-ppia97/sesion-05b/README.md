# sesion-05b
## CLASE VIERNES 05.09.2025
### Apuntes de clase ── .✦

⋆ Cuando hay un archivo que termina en .cpp, es largo, me entero cómo se hace algo, me hago cargo.

⋆ Cuando un archivo termina en .h, es que es lo que existe, se especifican las posibilidades que hay, prometo. Este tipo de archivos son muy crudos.

```cpp
class Adafruit_SSD1306 : public Adafruit_GFX {

}
//significa, Adafruit_SSD1306 necesita de Adafruit_GFX para funcionar (espacio-dos puntos-espacio),
hereda de Adrafruit GFX, SSD1306 depende de GFX

Ejemplo:
class Completo_Italiano : public Completo {

}
```
⋆ La herencia te permite que una clase utilice atributos y métodos de otra (atributo = variable) (metodo = funciones). 
⋆ Las clases se usan cuando queremos crear estructuras de datos que no nos caben en bloques fundamentales de lenguaje de programación. 
Jerarquías de cosas. Cosas más específicas.

[EJEMPLO DE C++ INHERITANCE](https://www.w3schools.com/cpp/cpp_inheritance.asp)

```cpp
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
```
```cpp
Planificación: 
1 clase que sea texto en general
1 clase que herede de texto, que sea un poema

entonces todos los poemas son textos, pero no todos los
textos son poemas

1 clase que contenga un pixel art en imagen
1 clase que herede de pixel art, que sea una colección de imágenes
relacionada, un array
``` 

> ⋆ Puedo crear conductos de otros tipos gracias a las clases.

#### EJEMPLOS DE CATEGORIZACIONES HECHAS EN CLASE (EN MI CUADERNO)
── (música) **BANDAS QUE ME GUSTAN**
* Género:
  
  -Rock: MCR; Metallica.
  
  -Reggaeton: Hector & Tito; Zion y Lennox.
  
  -Pop: ABBA; The Bee Gees.
  
  -Metal: Limp Bizkit; SOAD.
  
* Estado de ánimo:

  -Tranquilo: The Neighbourhood; Journey.

  -Estresado: Pierce The Veil; Rammstein.

  -Romántico: Wave To Earth; La Noche.

  -Eufórico: Plan B, Chico Trujillo.

* Nacionalidad:

  -Estadounidense: Alice in Chains; Deftones.

  -Inglesas: The Beatles; Black Sabbath.

  -Coreanas: BTS; Monsta X.

  .Chilenas: Los Tres; Los Bunkers.

* Estética:

  -Glam: Kiss.

  -Nu Metal: Korn.

  -Emo: Fall Out Boy.

  -Visual Key: Malice Mizer.
  

── **ANIMALES** (habitat)

* Terrestres: Arácnidos; felinos; reptiles; roedores; cánidos.
* Acuáticos: Peces; ballenas; delfines; moluscos; sirenios.
* Acuático-Terrestre: Pingüinos; ranas, tortugas; nutrias; cocodrilos.
* Aero-Terrestre: Búhos; abejas; colibríes; mariposas; libélulas.

── **TATUAJES**

* Ténica:

  -Introducción de tinta: perforación; handpoke; corte.

  -Aplicación de tinta: delineado; sombreado; puntillismo; superposición de colores.
  
* Estilo

  -Realismo.

  -Tradicional.

  -Neotradicional.

  -Japones.

  -Tribal.

  -BlackWork.

  -Dotwork.

  > TAREA: VER ALGUNA CHARLA DE MITCH RESNICK.

**"Let's teach kids to code" (2012)**
[Link de la charla](https://www.ted.com/talks/mitch_resnick_let_s_teach_kids_to_code?subtitle=es)

❀ Mitch Resnick: investigador del MIT Media Lab, conocido por crear Scratch y por su enfoque en el aprendizaje creativo.

> Se dice que programar no es solo para ingenieros, sino que es una forma de expresarse, como escribir o dibujar.

❀ Sobre Scratch: es una plataforma gratuita y visual, los niños allí crean juegos, animaciones e historias interactivas. También tiene una comunidad online en donde se comparten proyectos, colaboraciones, etc.

❀ Programar es una nueva forma de alfabetización que sirve como un lenguaje de expresión y creatividad en el mundo digital, comparable a lo que es leer y escribir.

❀Al programar se desarrollan diversas habilidades, como la creatividad ya que diseñas tus propias ideas desde cero, el pensamiento lógico y crítico al estructurar, organizar y mejorar; la resolución de problemas al enfrentarse a errores y buscarles solución, y también la colaboración al trabajar con pares y aprender de ellos.

❀Habla sobre la educación tradicional, diciendo que esta centrada en memorizar, repetir y cumplir instrucciones, mientras que él cree que se debe fomentar la exploración, el juego, la curiosidad y la pasión por crear.

> "No enseñamos a escribir solo para formar escritores"

4P's: proyectos, pares, pasión, juego

❀En el mundo actual y digital, no basta solo con consumir apps y la tecnología, sino que debemos ser creadores activos, programar es una herramienta para nuestro presente y nuestro futuro.

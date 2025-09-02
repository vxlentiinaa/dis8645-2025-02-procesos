# sesion-05a

Martes 02 de Septiembre, 2025 

Nota: clase intensa; muchaInformación = cerebroFrito. 

## Referentes (y otras cosas)

- **Graham Harman** (Filósofo estadounidense, es un exponente principal de la Ontología Orientada a Objetos (OOO)) 
- **OOO** (una corriente filosófica que postula la existencia autónoma y el valor de los objetos, no reducibles a sus partes, sus propiedades o sus relaciones con otros seres, incluidas las personas. La OOO defiende que los objetos tienen una realidad intrínseca y un "peso" ontológico propio, existiendo independientemente de la percepción humana o de su utilidad. - Gemini)
- **Bjarne Stroustrup** (Científico de la computación y catedrático de Ciencias de la Computación en la Universidad A&M de Texas. Es reconocido principalmente por el desarrollo del lenguaje de programación C++.)
- **Esolang** - la wiki de lenguajes de programación esotéricos, está dedicada al fomento y la documentación de lenguajes de programación diseñados para ser únicos, difíciles de programar o simplemente extraños. (<https://esolangs.org/wiki/Main_Page>)

## Qué aprendí hoy 

### Lenguajes de programación

- **Python** – Lenguaje versátil, fácil de aprender. Se usa en inteligencia artificial, ciencia de datos, automatización, desarrollo web, ciberseguridad y scripting. Es considerado ideal para principiantes, pero también muy potente en investigación y proyectos complejos.
- **JavaScript** – Lenguaje del navegador y esencial para páginas web interactivas. Se utiliza en desarrollo front-end, back-end con Node.js y aplicaciones móviles híbridas. Es la base de la web moderna.
- **Java** –Lenguaje robusto y multiplataforma gracias a la JVM. Se usa en aplicaciones empresariales, sistemas bancarios, servidores corporativos y desarrollo de Android. Es uno de los más longevos y aún muy demandado en grandes empresas.
- **C#** – Lenguaje de Microsoft orientado a objetos. Se emplea en aplicaciones Windows, servicios web y videojuegos con Unity. Es clave en el ecosistema Microsoft y la industria gamer.
- **C / C++** – Lenguajes muy potentes, C se utiliza en sistemas embebidos y C++ añade programación orientada a objetos. Son comunes en sistemas operativos, videojuegos de alto rendimiento, motores gráficos y dispositivos IoT. Son la base de gran parte del software y hardware moderno.(lo utilizamos en ARDUINO).
- **PHP** –  Lenguaje de programación para la web del lado del servidor. Se usa en páginas dinámicas, CMS como WordPress y plataformas de e-commerce. Aunque ha perdido popularidad, aún sostiene muchísimos sitios en internet.
- **TypeScript** – Superconjunto de JavaScript con tipado estatico. Es utilizado en proyectos grandes de desarrollo web y frameworks modernos como Angular. Mejora la escalabilidad y el mantenimiento de código.
- **SQL** – Lenguaje especializado para bases de datos, usado en gestión, consulta y manipulación de datos en sistemas como MySQL, PostgreSQL y SQL Server. Es esencial en casi todas las aplicaciones que manejan datos.
- **Go (Golang)** – Lenguaje creado por Google, enfocado en eficiencia y concurrencia. Se aplica en servicios web, infraestructura en la nube y sistemas distribuidos. Combina la simplicidad de Python con el rendimiento de C.
- **Rust** – Lenguaje de sistemas orientado a la seguridad y alto rendimiento. Se usa en sistemas operativos, servidores y software crítico de bajo nivel. Gana terreno como alternativa más segura a C y C++.
- **Kotlin** – Lenguaje moderno, seguro y totalmente interoperable con Java. Es el lenguaje oficial para Android recomendado por Google y también se usa en back-end. Facilita el desarrollo móvil con menos errores.
- **Swift** –  Lenguaje creado por Apple para iOS, macOS, watchOS y tvOS. Es el estándar en el ecosistema Apple y más seguro que Objective-C, siendo hoy el lenguaje principal para apps en ese entorno.
- **LUA** - lenguaje hecho en brasil (latinoamericano), lenguaje de scripting, rápido y de alto rendimiento, escrito en C, que se utiliza para extender aplicaciones, automatizar tareas y desarrollar videojuegos, gracias a su sintaxis sencilla y su pequeño tamaño. Destaca por su flexibilidad para integrarse con C y su uso en sistemas embebidos y web. 
- **CHUCK** - fue creado como respuesta para los lenguajes de musica con otros paradigmas; lenguaje de programación de código abierto diseñado para la música por computadora, la síntesis de audio, el análisis y la composición interactiva en tiempo real. 

Se pueden mezclar lenguajes (dependiendo del programa o lo que se quiera realizar, más que nada es hacer que distintos lenguajes convivan entre si en proyectos mas complejos)

### Pestañas en ARDUINO

Para distribuir la información (y que no pase lo que nos pasó en el grupo 07 que el código queda muy largo por las especificaciones de las imagenes), en un archivo de ARDUINO (guardado .INO) se abre en los 3 puntitos ( ... - al lado derecho de la barra gris) y se agrega una nueva pestaña (new tabe ó ctrl + shift + n), luego hay que guardar esta pestaña nueva como archivo .H o archivo . cpp dependiendo del caso para que se necesite. 

Ejemplo: `información.H` o `Constante.H` `información.cpp` o `Constante.cpp` 

Y luego en el código inicial (.INO) poner:  `#include "nombrearchivo"`

ejemplo: 

```cpp
#include "constantes.h"

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(numEstudiantes);
}
```

Finalmente los archivos se compila para formar parte de una unidad de compilación y un trabajo más complejo.
  
#### Sobre el archivo .H

El archivo .H es el que define, no hace/ejecuta (te dice la interfaz, "esto se puede hacer")(**definiciones**)

Para que no se pueda llamar al archivo 2 veces o haya problemas al momento de "citarlo" o incluirlo en el archivo .INO hay que especificar en el archivo .H: 

(los nombres deben ir en mayúscula porque son muy importantes, el H debe estar separado de un guión bajo en vez de un punto) 

```cpp
#ifndef "NOMBREARCHIVOENMAYUSCULA" // si no existe
# define "NOMBREARCHIVOMAYUSCULA"// entonces definelo

información del archivo 

#endif // fin de la definción 
```
ejemplo en el archivo .H

```cpp
#ifndef PERSONA_H
#define PERSONA_H

class Persona {

};

#endif

```

ejemplo en el archivo INO: 

``` cpp
#ifndef "CONSTANTES_H" 
# define "CONSTANTES_H"

const int numEstudiantes = 29;

#endif 
```

#### Sobre el archivo .cpp

Es el que dice que hace el archivo .H (clase), hay que agregar al archivo .cpp el archivo .h (importarlo con #include) 

Según Gemini: "Los archivos .cpp suelen contener las definiciones de funciones (el código que se ejecuta). Las declaraciones (solo la firma de la función o variable) suelen ir en archivos de encabezado (.h o .hpp) para ser incluidas en los archivos .cpp que las necesitan."

```cpp
#include "Persona.h"
```

## Programación orientada a objetos (POO) 

Según Gemini: POO es el acrónimo de Programación Orientada a Objetos, un paradigma de programación que organiza el código alrededor de "objetos", los cuales son unidades de software que combinan datos (atributos) y funciones (métodos). Este enfoque busca modelar conceptos del mundo real, facilitando la creación de software más reutilizable, modular y mantenible, promoviendo principios como la encapsulación, la herencia y el polimorfismo.  

La Programación Orientada a Objetos (POO) es un enfoque de programación que se basa en la creación y manipulación de “objetos”. Estos objetos son entidades que combinan datos y comportamientos en un solo paquete. En la POO, los objetos tienen atributos que representan sus características o propiedades, y métodos que definen las acciones que pueden realizar. Las clases se utilizan para definir la estructura y el comportamiento de los objetos. Una clase actúa como una plantilla o un modelo a partir del cual se crean objetos individuales con características únicas. (<https://openwebinars.net/blog/introduccion-a-poo-en-java-objetos-y-clases/>)

Definimos el objeto en cuestión (persona, objeto, textura, etc) en base a los parametros: 

- SIRVE PARA ALGO = FUNCIÓN 
- ESTA HECHO DE ALGO = MATERIA/FORMA 

### Clase = moldeDeGalletas 

En programación, una clase es una plantilla o molde para crear objetos, que son sus instancias concretas. Define los atributos (datos o propiedades) y los métodos (funciones o comportamientos) que tendrán todos los objetos de ese tipo. Las clases son un pilar de la programación orientada a objetos (POO), permitiendo modelar conceptos del mundo real, como "Auto", "Persona" o "Casa" (la primera letra va en mayúscula), y organizar el código de manera modular y reutilizable para agregarlos y utilizarlos en archivos INO. 

La clase es el diseño, mientras que el objeto es una realización específica de ese diseño. 
Se puede pensar en la clase como la receta y en el objeto como el pastel que se prepara con esa receta. 
Cada objeto creado a partir de una clase se denomina una instancia de esa clase. 
(capas/ventanas)

Componentes de una clase: 

- **Constructores:**

Las clases pueden tener constructores, que son métodos especiales utilizados para inicializar objetos cuando se crean. Los constructores tienen el mismo nombre que la clase y pueden tener diferentes parámetros para configurar el estado inicial del objeto.

- **Atributos (variables):**

Las clases pueden tener atributos, también conocidos como variables de instancia, son las características, propoiedades o datos que describen un objeto. Por ejemplo, un auto puede tener atributos como color, marca y velocidad.

- **Métodos (funciones):**

Las clases contienen métodos que representan el comportamiento/acción del objeto. Los métodos son funciones que pueden realizar acciones y manipular los atributos de la clase. En el caso del auto sería acelerar frenar, girar, etc.

ejemplo general: 

```cpp
Clase: Auto.

Atributos de la clase auto: color, modelo, velocidad_máxima.

Métodos de la clase auto: acelerar(), frenar().

Objetos (instancias): Un auto azul de modelo "Deportivo" y otro auto rojo de modelo "Todoterreno" serían dos objetos distintos, cada uno con sus propios valores para los atributos.
```

Resumen en aplicación: 

CONSTRUCTOR = FUNCIÓN 

parametro que si o si debe estar, es la condición inicial (por ejemplo se puede partir especificando si esta vivo o no) en el archivo .H (descripción)

```cpp
#ifndef PERSONA_H
#define PERSONA_H

class Persona {

public:

  // metodos
  // son funciones dentro de una clase

  // metodo constructor
  // sirve para crear nuevas instancias
  // clase Persona es un molde de galleta
  // metodo Persona() nos permite hacer las galletas
  // parametro del constructor es un boolean lentes
  // true si esta vivo, false si esta muerto
  Persona(bool vida);

  // destructor
  // virguLilla "~" significa destructor  
  ~Persona();

#endif 
```

despues en el archivo .cpp

se le añade valor (de archivo .H) como clase::valor = a nuevo valor 

esto hará que se pueda ejecutar despues la función

```cpp
#include "Persona.h"

// constructor
Persona::Persona(bool vida) {
  Persona::estaViva = vida;
}

// destructor
Persona::~Persona() {}

// set edad
void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}

// get edad
int Persona::getEdad() {
  return Persona::edad;
}
```

Conceptos fundamentales de las clases: 

- **Encapsulación:** Ayudan a proteger los datos de accesos no autorizados. La encapsulación es un principio de la POO que se refiere a la ocultación de los detalles de implementación de una clase y la exposición controlada de sus atributos y métodos. En Java, puedes utilizar modificadores de acceso como private, protected, public, etc., para controlar el acceso a los miembros de una clase. En conclusión, Agrupa datos y los métodos que los manipulan dentro del mismo objeto, ocultando la complejidad interna y protegiendo los datos. 
- **Herencia:** Las clases pueden heredar atributos y métodos de otras clases. La herencia permite la creación de jerarquías de clases, donde una clase (subclase o clase derivada) puede extender o heredar características de otra clase (superclase o clase base). Entonces, es lo que permite crear nuevas clases (clases hijas) que heredan atributos y métodos de clases existentes (clases padre), fomentando la reutilización de código.
- **Instanciación:** Para utilizar una clase, primero debes crear una instancia u objeto de esa clase. Puedes hacerlo utilizando el operador new, seguido del nombre de la clase y los argumentos necesarios para el constructor si lo tiene.
- **Abstracción:** Permiten agrupar datos y funciones relacionadas en una única unidad, ocultando la complejidad interna. 
- **Modularidad y reusabilidad:** Facilitan la creación de software más organizado y permiten reutilizar código existente. 

## Ejemplo 01

### Archivo .h (e1)

```cpp
#ifndef PERSONA_H
#define PERSONA_H

class Persona {

public:

  // metodos
  // son funciones dentro de una clase

  // metodo constructor
  // sirve para crear nuevas instancias
  // clase Persona es un molde de galleta
  // metodo Persona() nos permite hacer las galletas
  // parametro del constructor es un boolean lentes
  // true si esta vivo, false si esta muerto
  Persona(bool vida);

  // destructor
  ~Persona();

  // funcion void
  // que define edad
  // necesita parametro int
  void setEdad(int nuevaEdad);

  // funcion int
  // devuelve la edad
  int getEdad();


  // get y set de rut
  String getRut();

  void setRut(String nuevoRut);

  bool estaViva;
  int edad = -1;
  String rut;
};


#endif
```

### Archivo .cpp (e1)

```cpp
#include "Persona.h"

// constructor
Persona::Persona(bool vida) {
  Persona::estaViva = vida;
}

// destructor
Persona::~Persona() {}

// set edad
void Persona::setEdad(int nuevaEdad) {
  Persona::edad = nuevaEdad;
}

// get edad
int Persona::getEdad() {
  return Persona::edad;
}

// get y set de rut
String Persona::getRut(){
  return Persona::rut;
}

void Persona::setRut(String nuevoRut){
  Persona::rut = nuevoRut;
}
```

### Archivo INO (e1)

Donde se une el archivo .H y el archivo .cpp

```cpp
#include "constantes.h"
#include "Persona.h"

Persona aristoteles(false);
Persona javieraMena(true);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(42);

  aristoteles.setRut("1-0");
  javieraMena.setRut("11.111.111-1");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene RUT ");
  Serial.println(javieraMena.getRut());
}
```

## Ejemplo 02

### Archivo .h (e2)

```cpp
#ifndef SENSOR_ANALOGO_H
#define SENSOR_ANALOGO_H

#include <Arduino.h>

class SensorAnalogo {

public:
  // constructor
  SensorAnalogo(int nuevaPatita);

    // destructor
  ~SensorAnalogo();

  void definirRangoUtil(int nuevoMin, int nuevoMax);

  void definirRangoMapeo(int nuevoMin, int nuevoMax);

  void leerValor();
  

  int patita;

  int valorActual;
  int valorMinimo;
  int valorMaximo;

  int valorMapeado;
  int rangoMapeadoMin;
  int rangoMapeadoMax;

  String nombre;

};

#endif
```

### Archivo .cpp (e2)

```cpp
#include "SensorAnalogo.h"


  // constructor
  SensorAnalogo::SensorAnalogo(int nuevaPatita){
    SensorAnalogo::patita = nuevaPatita;
  }

    // destructor
  SensorAnalogo::~SensorAnalogo(){}

  void SensorAnalogo::definirRangoUtil(int nuevoMin, int nuevoMax){
    SensorAnalogo::valorMinimo = nuevoMin;
    SensorAnalogo::valorMaximo = nuevoMax;
  }

  void SensorAnalogo::definirRangoMapeo(int nuevoMin, int nuevoMax){
    SensorAnalogo::rangoMapeadoMin = nuevoMin;
    SensorAnalogo::rangoMapeadoMax = nuevoMax;
  }

  void SensorAnalogo::leerValor() {
    // leer el valor con analogRead
    SensorAnalogo::valorActual = analogRead(SensorAnalogo::patita);

    SensorAnalog::valorMapeado = map(SensorAnalogo::valorActual, 
    SensorAnalogo::valorMinimo, SensorAnalogo::valorMaximo,
    SensorAnalogo::rangoMapeadoMin, SensorAnalogo::rangoMapeadoMax 
    );

  }
```

### Archivo INO (e2)

Este ejemplo se toma del archivo H anterior (e1) y el archivo H y cpp del archivo actual (e2) 

```cpp
#include "constantes.h"
#include "Persona.h"
#include "SensorAnalogo.h";

Persona aristoteles(false);
Persona javieraMena(true);

SensorAnalogo potenciometroIzquierda(A0);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(42);

  aristoteles.setRut("1-0");
  javieraMena.setRut("11.111.111-1");

  potenciometroIzquierda.definirRangoUtil(0, 1023);
  potenciometroIzquierda.definirRangoMapeo(0, 10);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene RUT ");
  Serial.println(javieraMena.getRut());

  potenciometroIzquierda.leerValor();
}
```

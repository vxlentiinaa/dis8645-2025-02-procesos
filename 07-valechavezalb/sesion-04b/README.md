# sesion-04b

## 2 de septiembre de 2025 

# Encargo clase
Investigar la poesía y el trabajo de las poetas Allison Parrish, Nick Montfort y Martin Gubbins

# Alisson Parrish
**Mini Biografía**
- Poeta estadounidense, ingeniera en software, programadora creativa y diseñadora de juegos.
- Reconocida por la fusión entre el lenguaje y la poesía.
- Licenciatura en Lingúistica por la Universidad de California y una meaestría en en programa ITP en la NYU.
- Entre 2014 y 2016 fue escritora residente en el Departamento de Inglés de Fordham University y desde 2016 se desempeña como Assistant Arts Professor en el programa Interactive Telecommunications Program (ITP) de NYU.
- En 2016, Village Voice la nombró "Mejor creadora de bots de poesía", reconocimiento a su trabajo pionero en bots literarios.
- En 2024 recibió el Premio Maverick de la Electronic Literature Organization.
- Sus poesías han aparecido en publicaciones como BOMB Magazine y Strange Horizons.

## Obras destacadas
1. **Everyword** (2007-2014)
Se trata de un bot conceptual de Twitter (X actualmente), que cada 30 minutos publicaba cada palabra en inglés en orden alfabético y cada palabra venía acompañada por estadísticas sociales de la publicación. En 2015, el proyecto fue publicado como libro *Everybody: The Book*.
2. **Articulations** (2018)
Fue su primer libro completo de poesía generada mediante algoritmos. El texto explora conexiones lingüisticas entre poemas de dominio público, mostrando su capacidad para establecer relaciones entre palabras e ideas.
3. **Rewordable** (2017)
Un juego de mesa diseñado junto a Adam Simon y Tim Sztela, publicado por Clarkson Potter. Su enfoque lúdico en la manipulación del lenguaje destaca su habilidad para fusionar poesía y juego.
4. **Compasses**
Un fanzine de poemas generados por una computadora que recibió una mención honorífica en los Premios Prix Ars Electrónica 2021, señalando su relevancia en el campo de la poesía computacional.

# Nick Montfort 
**Mini biografía**
- Nacido en 1967 es un escritor, poeta, crítico literario y profesor universitario conocido por su trabajo pionero en **literatura electrónica**, **poesía generativa** y **narrativa interactiva**.
- Actualmente es profesor de Artes Digitales y Medios Comparativos en el MIT (Massachusetts Institute of Technology).
- Dirige el Trope Tank, un laboratorio dedicado a la investigación y producción de obras digitales, literatura electrónica y proyectos de programación creativa.
- Sus obras combinan teoría crítica con creación artística, explorando cómo los lenguajes naturales y los lenguajes de la programación, se combinan con la poesía y la narrativa.

## Obras destacadas
1. **Racing the Beam**: The Atari Video Computer System* (2009)
Junto a Ian Bogost, hicieron un estudio sobre cómo las limitaciones técnicas de la Atari 2600 moldearon los videojuegos y su estética.
2. **Taroko Gorge** (2009)
Un poema generativo que combina programación y poesía. Ha inspirado numerosos "remixes" de su obra con versiones modificadas, convirtiéndose en un clásico de poesía digital.
3. **#!(Shebang)** (2014)
Poemas generativos escritos en varios lenguajes de programación como Python, Perl, Ruby, entre otros más; que ponen en primer plano la materialidad del código como poesía.
4. **Exploratory Programming for the Arts and Humanities (2016)**
Consiste en un manual práctico que enseña a usar Python para la programación creativa, muy utilizado en universidades.

# Martín Gubbins 
**Mini biografía**
- Nacido en Santiago en 1971, es un poeta, abogado, artista visual, sonoro, editor y curador chileno.
- Su trabajo se despliega en poesía escrita, visual y sonora, y ha sido parte de numerosas antologías, exposiciones individuales y colectivas, instalaciones, performances y festivales en diversos países.
- Se caracteriza por una práctica poética multifacética, que explora intersticios donde lo significante emerge desde lo insignificante.
- En 2003 fundó junto a otros poetas y artistas, el Foro de Escritores, inspirado en modelos como el Writer Forum de Reino Unido, promoviendo la experimentación colectiva, más allá del ego individual.

## Obras destacadas
1. **Álbum** (2005)
Es una de sus obras más citas y se trata de libro que reúne piezas de poesía visual y experimental, donde juega con la disposición tipográfica, el espacio en la página y el cruce entre palabra e imagen. Más que narrar, propone experiencias de **lectura visual** donde el signo gráfico adquiere tanto valor como el significado lingüistico.
2. **Escalas** (2011)
Se trata de un trabajo de repetición y variación de signos, letras y patrones visuales. Que se centra en la idea idea de gradación y cambio progresivo, explorando como la palabra y el símbolo se transforman a medida que se reescriben o se deforman gráficamente.
3. **Cuaderno de Composición** (2014)
Publicado por Naranja Publicaciones, se trata de poesía visual y conceptual, donde se reproduce el formato de los clásicos cuadernos escolares de calirafía, pero en lugar de enseñar a escribir lo altera con juegos gráficos, letras distorsionadas, tachaduras y composiciones que desafían la legibilidad.
4. **Proyecto de Mnemotecnia** (2017)
Publicado en España es un trabajo híbrido entre poesía, memoria y experimentación visual, que explora el concepto de mnemotecnia (técnias para recordar), usando palabras, imágenes y estructuras gráficas que funcionan como "dispositivos de memoria". El texto se convierte en una surte de archivo o constelación de recuerdos en tensión.


# Clase de hoy

## ¿Qué son las clases?
- Es un concepto relacionada a la **programación orientada a objetos (POO)**, se puede entender como un molde o plantilla que define cómo serán los objetos que se creen a partir de ella.
- Una clase se compone de dos cosas:

1. Atributos (propiedades o varibales)
2. Métodos (funciones o comportamientos

Detro de las clases hay muchas opciones como public: 

**archivo.h**
archivo en donde se crean clases para definir algo. Ejemplo se crea la clase de Persona, y dentro de estas hay constructores, que son los parámetros que necesito para que sea una persona, por ejemplo: si usa lentes o no, etc. (ejemplo de la clase)




### Lenguaje C
- Sus archivos terminan en .c o .h
**C++**
- es o mismo que cpp (c plus plus en inglés)
- variable, set variable, get variable


**ARDUINO**
Puedo crear otro archivo .ino que se llame "creditos" para que hablen entre sí ambos archivos.

- **Para las proximas entregas, tendremos un sensor.h o ptenciometro.h**

# Ejercicios clase
- Las clases de los archivos se hacen con **.h** y **.cpp **+ el archivo arduino **.ino**

**ARCHIVO INO**
```cpp
//programacion orientada a objetos
#include "constantes.h"
#include "Persona.h"

Persona aristoteles(false);
Persona javieraMena(true);
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  aristoteles.setEdad(2025 + 384);
  javieraMena.setEdad(2025 - 1983);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Aristoteles tiene ");
  Serial.print(aristoteles.getEdad());
  Serial.println(" años");

  Serial.print("Javiera Mena tiene ");
  Serial.print(javieraMena.getEdad());
  Serial.println(" años");
}

```

**ARCHIVO .h**
```cpp
//cualquier codigo que incluya este archivo, tendra la informacion de este archivo solo escribiendo #include en el archivo principal
#ifndef PERSONA_H
#define PERSONA_H

class Persona { //las clases se escriben con mayúscula la primera letra

public:

//metodos son funciones dentro de una clase

//parametro del cosntructor es un boolean vida
//true si esta vivo, false si esta muerto
Persona(bool vida); //es el metodo constructor que sirve para crear nuevas instancias, que nos permite hacer las galletas 

//destructor
~Persona();

//funcion void
//que define edad
//necesita un parametro int (numero entero)
void setEdad(int nuevaEdad); //es un parametro de la nueva funcion


//funcion int
//devulve la edad 
int getEdad();


//las personas adentro de la clase, le pusimos un bool que nos dice que está vivo y un int que nos indica la edad
bool estaViva;
int edad;

}; //se debe escribir ; al final de calda } pero solo en las clases


#endif
```

**ARCHIVO .cpp**
```cpp
#include "Persona.h"

//se copian las funciones del archivo Persona.h, para que en este en cpp, nos dice cómo se hace y como se comporta 

//se eliminan los puntos y coma  y se agregar murcielagos 

//se ponen ::

//coonstructor
Persona::Persona (bool vida) {
  Persona::estaViva = vida;
}

//destructor
Persona::~Persona() {}

//set edad
void Persona::setEdad(int nuevaEdad) {
Persona::edad = nuevaEdad;  
}


//get edad
int Persona::getEdad() {

  return Persona::edad;
}
```

## Ejercicio para usar sensores análogos 

**SensorAnalogo.h**
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

**SensorAnalogo.h**
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
 
*Otros apuntes interesantes...*
**Categorías de Aristóteles**
1. Sustancia
2. Cantidad
3. Cualidad
4. Relación
5. Lugar
6. Tiempo
7. Posición (o Situación)
8. Posesión (o Hábito)
9. Acción
10. Pasión

- [https://openframeworks.cc/] para programar una aplicación.
- Para programar cosas en IOS se usa Swift, para crear aplicaciones.
- NORM computador que funciona con el lenguaje SuperCollider y también utiliza Lua.

  

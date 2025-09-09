# sesion-05b

Apuntes que escribí al revisar la clase grabada, ya que falté a la primera mitad de la clase.

Según entiendo, nos están mostrando los archivos de Adafruit, con los que logramos hacer funcionar nuestra pantalla OLED para el proyecto 1, para poder entender la importancia de los distintos archivos y las “class”.

En el archivo .cpp es donde nos encargamos de que las cosas funcionen y ocurran.

Los archivos .h normalmente son más cortitos, donde me entero de que existen.

En el h prometo, en el cpp me hago cargo.

Una parte muy central del código son los comentarios; no vamos a hacer una lámina, vamos a hacer una documentación decente que será legible, explicando quién hizo las cosas, en qué contexto y por qué.

Casi todos los celulares funcionan con arquitectura ARM, que es una manera de dar instrucciones a un computador chiquitito; nuestro Arduino funciona con ARM.

Adafruit_GFX es una biblioteca que creó Adafruit para crear gráficas en general; luego se dedicaron a crear las gráficas específicas para múltiples distintos displays y chips.

``` cpp

// todos los completos italianos son un subtipo de completos

class Completo_Italiano : public Completo{ }

// El pudú Waton es un tipo de pudú

class Pudu_Waton : public Pudu{ }

```

En W3Schools hay tutoriales de todo lo que quisiera poder aprender del mundo de la programación, sobre todo de C++, si es que quiero repasar algo.

La herencia (Inheritance en inglés) permite que una clase rehúse atributos (versión fancy de decir una variable que está dentro de una clase) y métodos (versión fancy de decir una función que está dentro de una clase) de otra clase.

Existen 2 tipos de herencias:  

- Base (parent), que es de donde está siendo heredada.  

- Derivada (child): la clase que hereda de la clase parent.  

Las clases se ocupan cuando queremos ocupar estructuras de datos que no nos caben en los bloques fundamentales que vienen en un lenguaje de programación.

Distintos archivos .h pueden ser dependientes unos de los otros, así que debo asegurarme de ponerles el #include, pero no es necesario que ponga, como en el ejemplo de la clase, el #texto para absolutamente todo, no, porque ya está incluido en otro archivo; de esta manera no haré mi código tan enredado.


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

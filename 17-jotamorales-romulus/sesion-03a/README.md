# sesion-03a

## Proyecto 1

Se explico que ibamos a hacer en el proyecto 1, fijado para el viernes 26-08-2025.

- En grupos de 3 a 4 personas.
- Haremos uso de lo que vayamos aprendiendo, experimentando y investigado en arduino.
- Hacer un poema interactivo en arduino con una pantalla de 128 x 64.
- El proyecto será evaluado tanto grupal como individualmente.
- En caso de no asistir se dará nota miníma.
- La idea es que los roles de los integrantes quede bien definido para evitar problemas.
- Descuento por atraso.
- "De los errores se aprende".
- Registrar avances en bitacora personal.

------------

### If / Else

El if es como decir “si pasa esto, hago tal cosa”. El else siempre es lo que pasa “en caso contrario”.

Ejemplo llevado a la vida real:

```cpp
if (arañan == true) {
   gritarFuerte();
} else {
  estoyTranquilo();
}
```

- Si una arañita → grito fuerte.

- Si no hay una araña → sigue viviendo mi vida.

- El == true significa que estamos revisando si la condición de que “araña" es real o no.

### Ñ en araña

La “ñ” no existe en el alfabeto inglés, y muchos lenguajes de programación están basados en ASCII (solo letras A-Z, números y símbolos básicos). Se puede usar la “ñ”, pero puede generar errores de compilación o que el código no se entienda bien.

### Operadores lógicos

Se usan para combinar condiciones en un if:

- AND (&&) → todas las condiciones deben ser verdad.

- OR (||) → basta que una condición sea verdad.

- NOT (!) → invierte la condición.

```cpp
if (arañas == true || alarmaSonando == true) {
    gritarFuerte();
} else {
    seguirDurmiendo();
}
```

- Si hay arañas o la alarma suena → grito fuerte

- Si no pasa ninguna de las dos cosas → sigo durmiendo tranquilo

- Se usa OR (||): basta que una de las condiciones sea verdadera para que se cumpla el if.

### ARDUINO

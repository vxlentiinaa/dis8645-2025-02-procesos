# Sesión-07b

Viernes 26 de septiembre, 2025

## Trabajo en clase

### Cosas que hablamos en la mañana

- Hablamos de las comisiones, ya que Aarón ya encontró una buena comisión, Cynthia.

- Rafael Benguria, profesor de Aarón y referente, Premio Nacional de Ciencias, hace clases de Física.

- Velocidad del sonido, no porque el sensor me diga algo es la verdad; es una interpretación.

### Pseudocodigo para los Proyectos-02

[reproductor-mp3](https://afel.cl/products/modulo-reproductor-mp3-dfplayer-mini)

---

## Encargo-14: Diagrama de flujo

cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta Mermaid.js con sus propias palabras y subirlo a su README.

[mermaid](https://mermaid.js.org/intro/getting-started.html)

```mermaid
---
config:
  theme: redux
---
flowchart TB
    A(["el sensor ultrasonico detecta distancia"]) --> B{"¿hay cercania?"}
    B --> n1(["sí"]) & n2(["no"])
    n2 --> n3(["loop"])
    n3 --> B
    n1 --> n4(["sonido"])
    n4 --> n5(["loop"])
    n5 --> B
     A:::Sky
     A:::Aqua
     B:::Rose
     B:::Sky
     B:::Aqua
     n1:::Aqua
     n1:::Sky
     n1:::Peach
     n2:::Rose
     n3:::Aqua
     n3:::Sky
     n4:::Peach
     n5:::Sky
    classDef Rose stroke-width:1px, stroke-dasharray:none, stroke:#FF5978, fill:#FFDFE5, color:#8E2236
    classDef Aqua stroke-width:1px, stroke-dasharray:none, stroke:#46EDC8, fill:#DEFFF8, color:#378E7A
    classDef Sky stroke-width:1px, stroke-dasharray:none, stroke:#374D7C, fill:#E2EBFF, color:#374D7C
    classDef Peach stroke-width:1px, stroke-dasharray:none, stroke:#FBB35A, fill:#FFEFDB, color:#8F632D
```

## Encargo-15,

cada persona del grupo debe subir a su README: documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de arduino como carpeta, tiene que poder compilar sin problema y mostrar en consola los datos de los sensores.

# sesion-07b

viernes 29 de septiembre

No fui a clases por campamento scout

COMPLETAR APUNTES

Revisar apuntes de [sofia-perezm](https://github.com/sofia-perezm/dis8645-2025-02-procesos/tree/main/22-sofia-perezm/sesion-07b)

## Encargo 14

Cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta Mermaid.js con sus propias palabras y subirlo a su README


```mermaid
graph TB;
A[MICRÓFONOS]
A-->B[analiza ampliitud]
A-->C[mic1]--> E
A-->D[mic2]--> E
E[Capta Señal]--> F(NO)
E-->G(SÍ) -->I
F-->H[Párpados cerrados]
I[Párpados abiertos]
I-->J[Se gira siguiendo el sonido]-->M
I-->K[Parpadea cada 2 segundos en loop]
K-->L[Gira hacia el micrófono con mayor amplitud]
K-->M[Sigue con la mirada al estímulo]
B-->N[Detecta cuál mic tiene mayor amplitud]
N-->O[mic1]-->Q
N-->P[mic2]-->Q
Q[Mayor amplitud]
O-->R(No)-->S[No se mueve]
P-->R
Q-->T(Sí)-->K
```

## Encargo 15

Cada persona del grupo debe subir a su README: documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de arduino como carpeta, tiene que poder compilar sin problema y mostrar en consola los datos de los sensores.
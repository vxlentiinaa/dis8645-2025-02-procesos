# sesion-07b


## encargo

```mermaid
flowchart TD
    B["Persona gira la perilla mecanica/manual"] --> n3["se dispensa un dulce (chicle)"]
    A(["Inicio"]) --> n4["Pantalla modo StandBy"]
    n4 --> B
    n3 --> n5["pasa por ducto de detección"]
    n5 --> n6["sensor de color lo clasifica/reconoce"]
    n6 --> n7["4 posibles respuestas en base al color"]
    n7 --> n8["Rojo"] & n9["Verde"] & n10["Azul"] & n11["Amarillo"]
    n8 --> n12["representa emoción enojado"]
    n9 --> n13["representa emoción loco"]
    n10 --> n14["representa emoción triste"]
    n11 --> n15["representa emoción felicidad"]
    n12 --> n16["se activa audio con mensaje enojado"] & n17["se activa animación ojos enojados"]
    n13 --> n18["se activa audio con mensaje loco"] & n19["se activa animación con ojos locos"]
    n14 --> n20["se activa audio con mensaje triste"] & n21["se activa animación ojos tristes"]
    n15 --> n22["se activa audio con mensaje feliz"] & n23["se activa animación ojos felices"]
    n16 --> n26["fin respuesta rojo"]
    n17 --> n26
    n18 --> n27["fin respuesta verde"]
    n19 --> n27
    n20 --> n28["fin respuesta azul"]
    n21 --> n28
    n22 --> n29["fin respuesta amarillo"]
    n23 --> n29
    n26 --> n30["tiempo de espera 5 segundos"]
    n27 --> n30
    n28 --> n30
    n29 --> n30
    n30 -.-> n4
    B@{ shape: diam}
    n6@{ shape: diam}
    n18@{ shape: rect}
    style n8 stroke:#D50000,fill:#FFCDD2
    style n9 stroke:#00C853,fill:#C8E6C9
    style n10 stroke:#2962FF,fill:#BBDEFB
    style n11 stroke:#FFD600,fill:#FFF9C4
    style n26 stroke:#D50000,fill:#FFCDD2
    style n27 stroke:#00C853,fill:#C8E6C9
    style n28 stroke:#2962FF,fill:#BBDEFB
    style n29 fill:#FFF9C4,stroke:#FFD600
```


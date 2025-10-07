# sesion-06b

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### [Natural Language Processing (NLP)](https://www.ibm.com/think/topics/natural-language-processing)

El Procesamiento de Lenguaje Natural (NLP) les permite a las computadoras entender, interpretar y generar lenguaje humano, escrito o hablado, mediante machine learning.

### [Videogrep](https://github.com/antiboredom/videogrep)

Es un command-line tool, es decir, un programa que se instala y utiliza a través de la terminal. <br/>
Este programa revisa los subtítulos de un video en busca de palabras y/o frases que el usuario le haya indicado, cortará el video y armará un "[supercut](https://www.youtube.com/watch?v=UyyYbl0huC4)" donde solo estén los clips en los que se dice dicha palabra o frase.

### [SpaCy](https://spacy.io/)

Biblioteca open source de NLP para Python. Es rápida, eficiente y fácil de integrar en proyectos. Según su página web, es el estándar de la industria.

### [Compilar y transpilar](https://stackoverflow.com/questions/44931479/compiling-vs-transpiling)

Ambos traducen código; sin embargo, al compilar se está tomando un código fuente de alto nivel (C++, Python, etc.) y convirtiéndolo en uno de bajo nivel, como el código máquina. <br/>
Mientras que, al transpilar, se convierte un código fuente a otro código del mismo nivel (entendible por humanos).

### [Material design](https://m3.material.io/)

Sistema de diseño open source de Google, creado para facilitar el desarrollo de interfaces, al tener componentes como barras de herramientas, botones, deslizadores, etc., ya hechos.

### [Flutter](https://flutter.dev/)

Framework open source desarrollado por Google para escribir programas y aplicaciones en un código fuente que funcione en múltiples plataformas distintas, como Android, iOS, Windows, macOS, Linux o la web.

### [Julio Cortazar](https://es.wikipedia.org/wiki/Julio_Cort%C3%A1zar)

Escritor argentino, posteriormente nacionalizado francés, maestro del relato corto, la prosa poética y la narración breve. Una de las figuras centrales del boom latinoamericano. </br>
Denunció a la dictadura militar de su país por prohibir sus libros.

-------------------------------------------------------------------
## Ideas 

- Mascota virtual que está durmiendo y con la que uno tiene que interactuar para despertarla. Una vez que se despierta, te saluda. <br>
La mascota mostraría una animación indicando que está durmiendo y se despertaría al detectar la presencia de una persona con un sensor ultrasónico, tras un determinado período de tiempo que la persona permanece frente a la mascota.

- Un robot con un sensor ultrasónico detecta que tiene una persona al frente y, con un servo, le extiende una manito para saludarlo. El humano, al extender su mano para saludar al robot, tapa la luz, lo cual es detectado por un LDR. Esto causa que el robot aleje su mano tras un corto delay y reproduzca "¡Ooooso!" con un parlante. Después de eso, el robot vuelve a extender la mano y, si el humano logra dársela, detecta que el LDR se mantiene tapado por más tiempo de lo usual, te saluda y te desea un buen día.
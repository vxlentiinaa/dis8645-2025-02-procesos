# sesion-06a

## 09.09.23
SCRATCH
<https://scratch.mit.edu/>
+ Software para primer acercamiento a la programación, especialmente para niños, usando bloques de programación sin tener la necesidad de escribir.
  
### Miller Pucket
+ trabaja generalmente en San Diego, vintage 1959, profesor del centro de investigación de computación y las artes.
+ Según wiwkipedia: Pofesor de música en la Universidad de California, San Diego , donde ha estado desde 1994. Puckette es conocido por ser el autor de Max , un entorno de desarrollo gráfico para música y síntesis multimedia , que desarrolló mientras trabajaba en IRCAM a fines de la década de 1980. También es el autor de **Pure Data** (Pd), una plataforma de ejecución en tiempo real para audio, video y lenguaje de programación gráfica para la creación de música informática interactiva y obras multimedia, escrita en la década de 1990 con aportes de muchos otros en las comunidades de música informática y software libre.

### Softwares de programación
+ **PURE DATA** Programado en C++, usa clases. Según wikipedia: Pure Data (o Pd) es un lenguaje de programación visual desarrollado por Miller Puckette durante los años 90 para la creación de música por ordenador interactiva y obras multimedia. Aunque Puckette es el principal autor del software, Pd es un proyecto de código abierto y tiene una gran base de desarrolladores trabajando en nuevas extensiones al programa. Está publicado bajo una licencia similar a la licencia BSD.
  
  ![pureData](./imagenes/pd.png)

+ Programación en estado objetos, programo objetos que conversan, no frases.
  
+ **TouchDesigner** Según derivative.ca: TouchDesigner es un producto de software de Derivative (Toronto y Los Ángeles) que se utiliza para crear aplicaciones interactivas 3D y 2D. Es procedimental, basado en nodos, en tiempo real y se considera un lenguaje de programación visual.

+ **IsadoraSoftware** Según hybridart.net: Isadora es software disponible para macOSX y para Windows, que actualmente está por la versión 3.0 recientemente estrenada. Una plataforma de reproducción de medios interactivos que combina un entorno de programación visual con un potente motor de procesamiento de video y audio. La propia filosofía del software hace que dispongamos de increíbles recursos que se han ido adaptando a las tecnologías emergentes. Creado a mediados de los 80 por Mark Coniglio.

+ **LaTeX** Se usa para hacer typesetting. Según Gemini: Es un sistema de composición tipográfica y procesador de textos, creado por Leslie Lamport en 1984, que se utiliza para producir documentos de alta calidad, especialmente en los campos científicos y técnicos. Funciona mediante un lenguaje de marcado que permite describir la estructura del documento en lugar de su apariencia, centrándose en el contenido y delegando la parte visual a un compilador que genera un archivo de salida. Al ser software libre, es gratuito, de código abierto y multiplataforma.
+ **overleaf** es LAteX pero en la nube. <https://es.overleaf.com/>

### lint
+ Según Gemini: "linting" es el proceso de verificar automáticamente el código fuente para encontrar errores y malas prácticas de programación. Las herramientas de linter (como linters para C# como StyleCop.Analyzers) ayudan a los desarrolladores a escribir código de mayor calidad.
+ **Detección automática de errores:** Los linters analizan tu código para encontrar posibles errores, fallos y áreas problemáticas antes de que se ejecute.
+ **Estándares de codificación:** Ayudan a mantener la consistencia del código aplicando estándares de estilo y buenas prácticas de programación.
+ **Mejora de la calidad del código:** Al identificar y sugerir correcciones para problemas de estilo y posibles errores, el linter mejora la legibilidad y la mantenibilidad del código.

### WorkFlow: 
+ Link de archivos markdown: Carpeta ".github/workflows", archivo "markdown-lint.yml".
+ **"archivo.ylm":** Según Gemini: Un archivo .yml o .yaml contiene datos serializados en un formato legible por humanos, utilizado principalmente para archivos de configuración en DevOps, intercambio de datos y para gestionar la localización de traducciones. Se caracteriza por una sintaxis simple y legible, que utiliza sangría de espacios (no tabulaciones) para estructurar datos y comentarios que comienzan con el símbolo #.
+ LINT: DESPELUZAMIENTO
+ **main** es el software para que la gente lo use, **branch** (sapea los errores) está oculta del público.
+ Se compone de uno o mas "jobs"

  ```cpp
  # Lint de archivos Markdown

  name: markdownlint-cli2-action

  # cuando ocurren los siguientes eventos
  on:
  # cuando hay push en la branch main
  push:
    branches: ## SAPEA LOS ERRORES/OCULTO AL PÚBLICO
      - main ##PARA QUE LA GENTE LO USE
    paths:
      - '**'

  # Un workflow se compone de uno o mas jobs que pueden correr en serie o paralelo
  jobs:
  # este workflow solamente contiene un job que se llama markdown-lint
  markdown-lint:
    # corre en una máquina ubuntu
  
    # DEJA EL UBUNTU Y DAME EL MÁS RECIENTE
    runs-on: ubuntu-latest
    

    # pasos que son parte del job
    steps:
  
    #BAJA UN REPOSITORIO
    # checkout del repositorio
    - name: Checkout repository
      uses: actions/checkout@v4
  
    #HACE LINT
    # usar la accion markdownlint-cli2-action para el linting
    - name: hacer lint
      uses: DavidAnson/markdownlint-cli2-action@v20.0.0
      # continue-on-error: true
      with:
    #HAZLO EN TODOS MENOS EN FRANUDP
        fix: true
        config: 'config/.markdownlint.jsonc'
        globs: '**.md,!28-FranUDP/**/**.md'
        separator: ','

        ```
+ REVISA TODOS LOS ARCHIVOS MARKDOWN Y COLECTA TODOS LOS ERRORES QUE ENCUENTRE
  
+ **Arduino en Github.** Si usamos bibliotecas que arduino no tiene, le decimos "cada vez que corras esto baja temporalmente esta biblioteca"
+ Proxima entrega: acercamiento a estos mensajes  y automatizaciones.
+ "utf8" Usar "ñ" y tíldes.

+ **Creative Inquiry** La "investigación creativa" es un proceso de exploración intelectual y artística que se enfoca en la generación de nuevo conocimiento a través de la curiosidad, el cuestionamiento y la colaboración interdisciplinaria, en lugar de la mera reproducción de información existente.

# sesion-02a .☘︎ ݁˖
## Comunicación Serial  

- **9600** → Significa **baudios (BAUD RATE)**.  
- **BAUD RATE** → Velocidad de comunicación.  

> "Uno le dice al Arduino: te voy a hablar a 9600" 
> "El monitor serial es un ojo. El `begin` le dice:  
> 'ábrete'  
> 'cuándo'  
> 'a 9600'  

────୨ৎ────

## USB  

- **U → Universal** → Estándar → *"funciona pa' mí y pa' Marte"* ~ Misa  
- **S → Serial** → *"Te voy a decir datos, uno tras otro"* ~ Aarón → Tiene ritmo.  
- **B → Bus** → Transporte.  

────୨ৎ────

## Conceptos clave ₊˚⊹ᰔ 

- **Presencia visual** → Fenómeno que te hace pensar que la luz está encendida constantemente, pero en realidad está parpadeando.  
- **IoT (Internet of Things)** → Red de objetos físicos conectados a internet, que recopilan e intercambian datos.  
- **Digital Being (Nicholas Negroponte)** → *"Un señor que estudió en Suiza y piensa que es clase media"* ~ Aarón  
- **Yuk Hui** → Filosofía de la tecnología.  
- **Realismo especulativo** → Corriente filosófica contemporánea.  
- **Incierto y sinuoso** → Sokio → [sokio.studio](http://sokio.studio)  

> Con ópera experimental *Paraíso en Nueva York*, el artista chileno Sokio retornó al género tras 20 años.  

── .✦

### Recursos y referencias  

- **UNTREF** - Pregrado y posgrado de arte electrónico  
  → Jazmín Adler, Valentina Montero.  

- **Yaeltex**  
  → Controladores y hardware musical.  

- **.xyz**  
  → Dominios baratos.  

- **Caja Negra Editora**  
  → Editorial que traduce libros bacanes.  

── .✦

### Sampler y síntesis sonora  

- **Teenage Engineering**  
  → Sintetizadores portátiles.  

── .✦

### Diseño  

- **Diseño industrial**  
- **Diseño gráfico**  
- **Diseño de usuario**  

- **Georgia Tech**  
  → *"Si quieren hacer un sintetizador, postulen a esto"* ~ Aarón  

- **National Sawdust**  

── .✦

### Artistas y proyectos  

- **Gordon Matta-Clark** → *Anarquitecto*.  
- **Juan Downey** → Artista visual.  
- **Strange Trigger** → repo de Misa.  
- **Caja Hammond**.  
- **Andy Cavatorta**.  
- **CDM - Create Digital Music**.  
- **NY Soundworks - Bricolo**.  
- **Tutupá - Missa**.  

## Entrga de codigos clase 12/Agosto ᝰ.ᐟ

### CODIGO 01
```cpp
void setup() {
// declarar pinMode
  pinMode (2, INPUT_PULLUP);
  Serial.begin(9600);
}
// loop de frase
void loop() {
 if(digitalRead(2) == LOW){
  Serial.println("oe");
  Serial.println("prestame luka quiniento");

 }

}
```

### CODIGO 02
```cpp
void setup() {
//declarar pin a usar
 pinMode(2, INPUT_PULLUP);
 pinMode(3, OUTPUT);

}
//loop de led para encender
void loop() {
  if(digitalRead(2) == LOW){
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);
  }
}
```

### CODIGO 03
```cpp
void setup() {
// declarar pinMode
  pinMode(13, OUTPUT);

}
// loop de frase en morze con LED de arduino
void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(3000);

}
```

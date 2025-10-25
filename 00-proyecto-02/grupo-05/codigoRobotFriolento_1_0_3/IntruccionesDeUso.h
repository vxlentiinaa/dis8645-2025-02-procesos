// Para el funcionamiento de Friolín se deben seguir los siguientes pasos:

// 1. Instalación de las Bibliotecas de para el uso de cada componente

//   La lista de Bibliotecas usadas es la siguiente:
//  Adafruit_GFX de Adafruit
//  Adafruit_SSD1306 de Adafruit
//  DHT11 de Dhruba Saha

// 2. Conectar los componentes al Arduino

// A continuación se puede observar una guía para la conexión de cada componente:
    // Para conexión del Display OLED1306:   
    // GRD a GND                
    // VCC a 5V                  
    // SCL a A5 (Analog in 5)     
    // SDA a A4 (Analog in 4)

    // Para conexión del sensor de Temperatura DHT11:
    // GND  a GND  
    // VCC  a 5V  
    // DATA a 5 (PWM~) 

    // Para conexión del Servomotor:
    // Cable Amarillo (El de la IZQ) a 9 (PWM~)
    // Cable Rojo (El del MEDIO)   a 5V
    // Cable Negro (El de la DER)    a GND

    // Para conexión del sensor Ultrasónico HC-SR04:
    // GND  a GND  
    // VCC  a 5V  
    // Echo a 2 (PWM~)
    // Trig a 3 (PWM~)

// 3. Calibrar la distancia a la que debe estar una persona para ser considerada por Friolín 

// 4. Calibrar la temperatura Friolín 

// 5. Conectar Arduino a computador y subir el código de este proyecto
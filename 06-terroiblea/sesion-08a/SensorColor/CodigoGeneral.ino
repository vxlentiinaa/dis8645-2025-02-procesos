// Interacción/Resultado en base al color
// Elige la respuesta según el estimulo
// Fases de la interacción:
// 1. Pantalla modo standby - se reproduce animación neutra
// 2. Persona gira la perilla mecanica de forma manual y sale un dulce
// 3. Cuando el dulce sale pasa por un conducto y el sensor de color reconoce el color
// 4. en base al color reconocido se activa respuesta de pantalla (animación) y auditiva (10 segundos maximo de respuesta)
// 5. Despues de un momento sin respuesta vuelve al estado inicial 

void setup() {
  configurarSensorColor();
  configurarTerminal();
}

void loop() {
 leerSensor();
 tomarDecisiones();
 actuar();
} 
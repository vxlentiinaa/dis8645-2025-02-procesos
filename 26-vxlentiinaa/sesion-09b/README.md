# sesion-09b

10-10-2025

## Apuntes

Comenzamos a buscar información sobre motor de vibración de un joystick que desarmé. Y analizar la morfología del robot para hacerle mejoras a este.

### Motor de vibración de joystick

Estos motores los saqué del joystick de xbox, son motores de vibración de corriente continua DC.

- motor izquierdo (grande): produce vibraciones fuerte y lentas
- motor derecho (pequeño): produce vibracioens rápidas y suaves, ideales para vibraciones

Es bueno usar estos motores con transistores para que permitan modular la intensidad mediante PWM (Pulse Width Modulation)

Encontramos este datasheet de los motores, está en inglés: [VibrationMotor](https://www.mouser.com/datasheet/2/321/28822-Vibration-Motor-Capsule-Documentation-370386.pdf?srsltid=AfmBOopCm5vTXsDBh9L5Jpoopf-v8sNSxtuI31pFvqmlfscw5TyvyKIX&utm_source=chatgpt.com)

insertar imagenes

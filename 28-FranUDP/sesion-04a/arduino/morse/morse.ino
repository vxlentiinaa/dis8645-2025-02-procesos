String mensaje = "soyfranudp"; 

bool messageDone = false;
const int LED = 13;
const int Vdot = 200; // duracion de un punto (valor)
const int Vdash = Vdot * 3; // duracion raya (valor)
const int gap = Vdot; // espacio entre letras/caracteres
const int bigGap = Vdot * 7; // espacio entre palabras

void dot() {            // definiendo punto
  digitalWrite(LED, 1);
  delay(Vdot);
  digitalWrite(LED, 0);
  delay(gap);
}

void dash() {            // definiendo raya
  digitalWrite(LED, 1);
  delay(Vdash);
  digitalWrite(LED, 0);
  delay(gap);
}

void A() {            // definiendo letra A
  dot();
  dash();
}

void B() {            // definiendo letra B
  dash();
  dot();
  dot();
}

void C() {            // definiendo letra C
  dash();
  dot();
  dash();
  dot();
}

void D() {            // definiendo letra d
  dash();
  dot();
  dot();
}

void E() {            // definiendo letra f
  dot();
}

void F() {            // definiendo letra f
  dot();
  dot();
  dash();
  dot();
}

void G() {            // definiendo letra g
  dash();
  dash();
  dot();
}

void H() {            // definiendo letra h
  dot();
  dot();
  dot();
  dot();
}

void I() {            // definiendo letra i
  dot();
  dot();
}

void J() {            // definiendo letra j
  dot();
  dash();
  dash();
  dash();
}

void K() {            // definiendo letra k
  dash();
  dot();
  dash();
}

void L() {            // definiendo letra l
  dot();
  dash();
  dot();
  dot();
}

void M() {            // definiendo letra m
  dash();
  dash();
}

void N() {            // definiendo letra n
  dash();
  dot();
}

void O() {            // definiendo letra o
  dash();
  dash();
  dash();
}

void P() {            // definiendo letra p
  dot();
  dash();
  dash();
  dot();
}

void Q() {            // definiendo letra q
  dash();
  dash();
  dot();
  dash();
}

void R() {            // definiendo letra r
  dot();
  dash();
  dot();
}

void S() {            // definiendo letra s
  dot();
  dot();
  dot();
}

void T() {            // definiendo letra t
  dash();
}

void U() {            // definiendo letra u
  dot();
  dot();
  dash();
}

void V() {            // definiendo letra v
  dot();
  dot();
  dot();
  dash();
}

void W() {            // definiendo letra w
  dot();
  dash();
  dash();
}

void X() {            // definiendo letra x
  dash();
  dot();
  dot();
  dash();
}

void Y() {            // definiendo letra y
  dash();
  dot();
  dash();
  dash();
}

void Z() {            // definiendo letra z
  dash();
  dash();
  dot();
  dot();
}


void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (messageDone == false) {
    for (int i = 0; i < mensaje.length(); i++) {
  char caracterActual = mensaje.charAt(i);
  Serial.println(caracterActual);
  traductor(caracterActual);
  messageDone = true;
  }
  
  }
}

void traductor(char sorter) {
  switch (sorter) {
    case 'a':
      A();
      break;
    case 'b':
      B();
      break;
    case 'c':
      C();
      break;
    case 'd':
      D();
      break;
    case 'e':
      E();
      break;
    case 'f':
      F();
      break;
    case 'g':
      G();
      break;
    case 'h':
      H();
      break;
    case 'i':
      I();
      break;
    case 'j':
      J();
      break;
    case 'k':
      K();
      break;
    case 'l':
      L();
      break;
    case 'm':
      M();
      break;
    case 'n':
      N();
      break;
    case 'o':
      O();
      break;
    case 'p':
      P();
      break;
    case 'q':
      Q();
      break;
    case 'r':
      R();
      break;
    case 's':
      S();
      break;
    case 't':
      T();
      break;
    case 'u':
      U();
      break;
    case 'v':
      V();
      break;
    case 'w':
      W();
      break;
    case 'x':
      X();
      break;
    case 'y':
      Y();
      break;
    case 'z':
      Z();
      break;
  }
}


//dónde esta cada pin
//S0 y S1 controlan la potencia
#define  s0 8       
#define s1 9
//S2 y S3 controlan los fotodiodos de cada color
#define s2 10
#define s3 11
#define  out 12

int data=0;        
//guarda valores
//podría servir para llevar valores a clases
void  setup() 
{
   pinMode(s0,OUTPUT);    //pin modes
   pinMode(s1,OUTPUT);
   pinMode(s2,OUTPUT);
   pinMode(s3,OUTPUT);
   pinMode(out,INPUT);

   Serial.begin(9600);   //intialize the serial monitor baud rate
   
   digitalWrite(s0,HIGH);  //Putting S0/S1 on HIGH/HIGH levels means the output frequency scalling is at 100%  (recommended)
   digitalWrite(s1,HIGH); //LOW/LOW is off HIGH/LOW is 20% and  LOW/HIGH is  2%
   
}

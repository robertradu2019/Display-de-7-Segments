int pausa=1000; 

void setup() {
  
 
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void display (int a, int b, int c, int d, int e, int f, int g)
// Variables de funcions del display, le utilitzarem per un display ràpid al void loop
{
  digitalWrite (7,a);   
  digitalWrite (8,b);   
  digitalWrite (9,c);
  digitalWrite (10,d);
  digitalWrite (11,e);
  digitalWrite (12,f);
  digitalWrite (13,g);
}
void loop() {
  //Farem que hi posi el meu nom, lletra per lletra
  display (0,0,0,0,1,0,1); // per el R 
  delay(pausa);
  display (1,1,1,1,1,1,0); //per el O
  delay(pausa);
  display (0,0,1,1,1,1,1); // per el B 
  delay(pausa);
  display (1,0,0,1,1,1,1); // per el E
  delay(pausa);
  display (0,0,0,0,1,0,1); // per el R
  delay(pausa);
  display (0,0,0,1,1,1,1); //per el T
  delay(pausa);
 
  

  }

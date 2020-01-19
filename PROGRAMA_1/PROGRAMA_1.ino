int pausa=1000; 
 
void setup()
{
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void display (int a, int b, int c, int d, int e, int f, int g)
// Funcion del display
{
  digitalWrite (7,a);   
  digitalWrite (8,b);   
  digitalWrite (9,c);
  digitalWrite (10,d);
  digitalWrite (11,e);
  digitalWrite (12,f);
  digitalWrite (13,g);
}
 
void loop() 
// cada 1 i 0 representa els ints a-g declarats a void display
{
  display (1,1,1,1,1,1,0); // per el 0 
  delay(pausa);
  display (0,1,1,0,0,0,0); //per el 1
  delay(pausa);
  display (1,1,0,1,1,0,1); // per el 2 
  delay(pausa);
  display (1,1,1,1,0,0,1); // per el 3
  delay(pausa);
  display (0,1,1,0,0,1,1); // per el 4
  delay(pausa);
  display (1,0,1,1,0,1,1); //per el 5
  delay(pausa);
  display (1,0,1,1,1,1,1); //per el 6
  delay(pausa);
  display (1,1,1,0,0,0,0); // per el 7
  delay(pausa);
  display (1,1,1,1,1,1,1); //per el 8
  delay(pausa);
  display (1,1,1,0,0,1,1); // per el 9
  delay(pausa);
}
 

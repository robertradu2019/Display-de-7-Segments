const int buttonPin = 2;
int pausa=1000; 
int buttonState = 0;

void setup() {
  
  pinMode(buttonPin,INPUT);
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
  
  buttonState = digitalRead(buttonPin);

  
  if (buttonState == HIGH) {


     pinMode(7,LOW);
    pinMode(8,LOW);
    pinMode(9,LOW);
    pinMode(10,LOW);
    pinMode(11,LOW);
    pinMode(12,LOW);
    pinMode(13,LOW);
  }
  else{
    
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
}

//per acabar, falta el stop 

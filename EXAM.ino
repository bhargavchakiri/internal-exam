int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

int state;

#define ON LOW
#define OFF HIGH

void setup() 
  {
    pinMode (A,OUTPUT);
    pinMode (B,OUTPUT);
    pinMode (C,OUTPUT);
    pinMode (D,OUTPUT);
    pinMode (E,OUTPUT);
    pinMode (F,OUTPUT);
    pinMode (G,OUTPUT);
    Serial.begin(9600);
    
  }
  

void loop() {
  
  digitalWrite(A,OFF);
  digitalWrite(B,OFF);
  digitalWrite(C,OFF);
  digitalWrite(D,OFF);
  digitalWrite(E,OFF);
  digitalWrite(F,OFF);
  digitalWrite(G,OFF);
  if(state = 1){
    digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,ON);
    digitalWrite(F,ON);
    digitalWrite(G,OFF);
    delay(1000);

     digitalWrite(A,OFF);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,OFF);
    digitalWrite(E,OFF);
    digitalWrite(F,OFF);
    digitalWrite(G,OFF);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,OFF);
    digitalWrite(D,ON);
    digitalWrite(E,ON);
    digitalWrite(F,OFF);
    digitalWrite(G,ON);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,OFF);
    digitalWrite(F,OFF);
    digitalWrite(G,ON);
    delay(1000);

     digitalWrite(A,OFF);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,OFF);
    digitalWrite(E,OFF);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,OFF);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,ON);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,OFF);
    digitalWrite(E,OFF);
    digitalWrite(F,OFF);
    digitalWrite(G,OFF);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,ON);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,OFF);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);
  }


    if(state = 0){

      digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,OFF);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,ON);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

    digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,OFF);
    digitalWrite(E,OFF);
    digitalWrite(F,OFF);
    digitalWrite(G,OFF);
    delay(1000);

     digitalWrite(A,ON);
    digitalWrite(B,OFF);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,ON);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

    digitalWrite(A,ON);
    digitalWrite(B,OFF);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,OFF);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

     digitalWrite(A,OFF);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,OFF);
    digitalWrite(E,OFF);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

    digitalWrite(A,OFF);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,OFF);
    digitalWrite(E,OFF);
    digitalWrite(F,ON);
    digitalWrite(G,ON);
    delay(1000);

    digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,OFF);
    digitalWrite(F,OFF);
    digitalWrite(G,ON);
    delay(1000);

    digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,OFF);
    digitalWrite(F,OFF);
    digitalWrite(G,ON);
    delay(1000);


    digitalWrite(A,OFF);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,OFF);
    digitalWrite(F,OFF);
    digitalWrite(G,OFF);
    delay(1000);

    digitalWrite(A,ON);
    digitalWrite(B,ON);
    digitalWrite(C,ON);
    digitalWrite(D,ON);
    digitalWrite(E,ON);
    digitalWrite(F,ON);
    digitalWrite(G,OFF);
    delay(1000);

      
    }
    
    
    
    
  }
  



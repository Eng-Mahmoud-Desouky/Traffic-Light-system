int R = 2;
int Y = 3;
int G = 4;
int T = 1000;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(Y,OUTPUT);
}
void loop (){
digitalWrite(R,1);
digitalWrite(Y,0);
digitalWrite(G,0);
delay(T);
digitalWrite(R,1);
digitalWrite(Y,1);
digitalWrite(G,0);
delay(T);
digitalWrite(R,1);
digitalWrite(Y,0);
digitalWrite(G,0);
delay(T);
digitalWrite(R,1);
digitalWrite(Y,1);
digitalWrite(G,0);
delay(T);
digitalWrite(R,1);
digitalWrite(Y,0);
digitalWrite(G,0);
delay(T);
digitalWrite(R,1);
digitalWrite(Y,1);
digitalWrite(G,0);
delay(T);
digitalWrite(R,0);
digitalWrite(Y,0);
digitalWrite(G,1);
delay(T);

}


int a = 32;  // definim les variables 
int b = 45;
int c = 59;
int d = 61;


void setup() {     // put your setup code here, to run once:

 Serial.begin(9600);  // Inicialitzar el port serie 

 Serial.println("Unes quantes operacions: ");

 Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);
  Serial.print("d = ");
  Serial.println(d);

  Serial.print("a + c = ");   // operació suma 
  Serial.println(a + c); 
  Serial.print("b + d = ");
  Serial.println( b + d); 
  Serial.print("a + b = ");
  Serial.println(a + b);
  Serial.print("c + d = ");
  Serial.println(c + d); 
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

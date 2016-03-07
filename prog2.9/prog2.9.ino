/*************************************************************************
**                                                                      **
**              Descripció programa                                     **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************


int a = 3;
int b = 2;
int d;

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // velocitat a la que escaneja. 

  Serial.println("Una divisio ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}
void loop()    // we need this to be here even though its empty
{
}


/*************************************************************************
**                                                                      **
**              Descripció programa                                     **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************


int num = 89;

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);   // Aquí podrem veure la variable en forma decimal
  
  Serial.println(num,BIN);   // Aqui podrem veure la variable en forma binaria
  
  Serial.println(num,HEX);   // Aqui podrem veure la variables en forma hexadecimal
  
  Serial.println(num,OCT);   // Aqui podrem veure la variable en forma octogonal
}

void loop()   // we need this to be here even though its empty
{
}


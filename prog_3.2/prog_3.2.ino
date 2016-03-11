/*************************************************************************
**                                                                      **
**              Descripció programa                                     **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************


int thisByte = 33; //Variable d'inici 

void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 
} 

// En aquest programa podem observar com el arduino ens diu des del numero 33 fins al 126 en decimal, hexadecimal, octal i simbols que hi han amb els els numeros 
void loop()
{ 
  Serial.write(thisByte);    
  
  Serial.print(", dec: ");    //Tots els numeros en forma decimal 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     //Tots els numeros en forma hexadecimal 
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     //Tots els numeros en forma octal 
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   //Tots els numeros en forma binaria 

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character

} 


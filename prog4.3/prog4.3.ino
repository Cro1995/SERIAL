/*************************************************************************
**                                                                      **
**              Descripció programa                                     **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************


//Si la temperatura es inferior als 90º C el arduino ens comenta que l'aigua encara no bull
//Si la temperatura es superior o igual als 90º C i inferior als 100º C el arduino ens comenta que l'aigua està a punt de bullir 
//Si la temperatura es igual a 100ºC el arduino ens comenta que l'aigua esta a 100º C
//Si la temperatura es superior als 100ºC el arduino ens comenta que l'aigua està bullint 
 
int tempAigua = 105;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 90)
  {
    Serial.print("Aigua encara no bull!");
    
  } 
  if (( tempAigua >= 90)&& (tempAigua < 100))
    Serial.print( "Aigua a punt de bullir!");
  
  if (tempAigua== 100)
    Serial.print( "Aigua a 100 C!"); 

  if (tempAigua > 100)
    Serial.print( "Aigua bullint!");  
    
}


void loop()   // we need this to be here even though its empty
{
}



/*************************************************************************
**                                                                      **
**              Descripció programa                                     **
**                                                                      **
*************************************************************************/

//******  Includes   *****************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************

//En aquest programa podrem observar que quan la temperatura superi els 100ºC el arduino ens comenta que l'aigua està bullint, si no supera els 100ºC no posarà res//
int tempAigua = 101;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}

void loop()   // we need this to be here even though its empty
{
}



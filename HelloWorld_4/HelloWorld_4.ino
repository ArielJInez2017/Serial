/****************************************************************
**                                                            **
**                       TÍTOL:Hello world 4                  **                                
**                                                            **
**                                                            **
**                                                            **
**  NOM: Ariel Jinez                         DATA: 06/02/2017 **                
****************************************************************/
//************************ INCLUDE *****************************

 
//*********************** VARIABLES ****************************



//************************* SETUP ******************************
 
void setup()              // run once, when the sketch starts
{                   
    Serial.begin(9600);  // set up Serial library at 9600 bps
    Serial.println("Escull el numero d'operacions que vols realitzar?");
    Serial.println("  1. Comprovar numero de tarjeta de credit");
    Serial.println("  2. Comprovar numero de compte bancari");
    Serial.println("  3. Buscar un digit de tarjeta de credit");
}

//************************** LOOP *******************************

void loop()               
{                       
  
}

//************************* FUNCIONS ****************************

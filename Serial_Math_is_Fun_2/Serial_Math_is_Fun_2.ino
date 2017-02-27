/****************************************************************
**                                                            **
**                       TÍTOL: Math is fun                   **                                
**                                                            **
**                                                            **
**                                                            **
**  NOM: Ariel Jinez                         DATA: 06/02/2017 **                
****************************************************************/
//************************ INCLUDE *****************************

 
//*********************** VARIABLES *****************************************



//************************* SETUP *******************************************
  int drive_gb = 5;
  int drive_mb;
 
void setup()              // s'executa una vegada, quan s'inicia l'esborrany
{                   
    Serial.begin(9600);   // set up Serial library at 9600 bps
    Serial.print("Your HD is ");
    Serial.print(drive_gb);
    Serial.println(" GB large.");

    drive_mb = 1024 * drive_gb;
    Serial.print("It can store ");
    Serial.print(drive_mb);
    Serial.println(" Megabytes!");    
}

//************************** LOOP ********************************************

void loop()               // we need this to be here even thoug it's empty
{                       
  
}

//************************* FUNCIONS *****************************************

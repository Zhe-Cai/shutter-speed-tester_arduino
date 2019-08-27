// adapted from cameradactyl Shutter_Timer_v1.2
long Start;   // shutter opens  in microsecond
long Stop;    // shutter closes
int Fired = 0;  // flag for shutter fires
int Risingflag = 0;  // interrupt: voltage up 
int Fallingflag = 0;  // interrupt: voltage down



void setup() {                                                

  Serial.begin(9600);                                          
  attachInterrupt(digitalPinToInterrupt(2), CLOCK, CHANGE);    //run the function CLOCK, every time the voltage on pin 2 changes.

}

void loop() {                                                 
  if(Risingflag ==1){                       
    Start = micros();       //set the variable Start to current microseconds
  Risingflag=0;           //reset the rising flag
  }
  if(Fallingflag == 1){
  Stop = micros();      
  Fallingflag = 0;      //reset the falling flag
  Fired = 1;            // set the fired flag 
  }
  if(Fired == 1){                            
    Serial.print("Start: ");
    Serial.println(Start);
    Serial.print("Stop: ");
    Serial.println(Stop);
    long Speed = (Stop - Start);      
    Serial.print("Microseconds: ");
    Serial.println(Speed);               
  

    float SS = (float)Speed/1000000;    // shutter open in seconds
    float SS2 = 1/SS;                   // 1/seconds
    Serial.print("shutter speed: 1/");
    Serial.println(SS2);                
    Serial.println();
    Start = 0;                         
    Stop = 0;                           
    Fired = 0;                          
  } 
}

void CLOCK(){                     
  if(digitalRead(2) == LOW){
    Risingflag = 1;                
  }
  if(digitalRead(2) == HIGH){        
    Fallingflag =1;
  }
}
